/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 7, 2014 at 1:47:38 AM Eastern European Standard Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>

@protocol UINavigationControllerDelegate;
@class NSArray, UINavigationController, MusicRadioViewController;

@interface MusicTabBarController : UITabBarController {

	BOOL _isVisible;
	BOOL _needsReloadWhenBecomingVisible;
	NSArray* _visibleViewControllerIdentifiers;
	BOOL _supportsTransiency;
	BOOL _displayEmptyTabs;
	NSArray* _customizableViewControllerIdentifiers;
	id<UINavigationControllerDelegate> _navigationControllerDelegate;
	NSArray* _orderedViewControllerIdentifiers;
	UINavigationController* _radioNavigationController;
	MusicRadioViewController* _radioViewController;

}

@property (nonatomic,copy) NSArray * customizableViewControllerIdentifiers;                                       //@synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) id<MusicTabBarControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * visibleViewControllerIdentifiers; 
@property (nonatomic,copy) NSArray * orderedViewControllerIdentifiers;                                            //@synthesize orderedViewControllerIdentifiers=_orderedViewControllerIdentifiers - In the implementation block
@property (nonatomic,readonly) UINavigationController * radioNavigationController;                                //@synthesize radioNavigationController=_radioNavigationController - In the implementation block
@property (nonatomic,readonly) MusicRadioViewController * radioViewController;                                    //@synthesize radioViewController=_radioViewController - In the implementation block
@property (assign,nonatomic) BOOL supportsTransiency;                                                             //@synthesize supportsTransiency=_supportsTransiency - In the implementation block
@property (assign,nonatomic) BOOL displayEmptyTabs;                                                               //@synthesize displayEmptyTabs=_displayEmptyTabs - In the implementation block
+(Class)_moreNavigationControllerClass;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)moreNavigationController;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(NSArray *)customizableViewControllerIdentifiers;
-(void)setCustomizableViewControllerIdentifiers:(NSArray *)arg1 ;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)switchToShortcutIdentifier:(id)arg1 ;
-(void)_isRadioEnabledDidChangeNotification:(id)arg1 ;
-(void)ensureTabsAreLoaded;
-(id)_orderedViewControllerIdentifiersForViewControllers:(id)arg1 ;
-(id)_mergedOrderedViewControllerIdentifiersWithViewControllers:(id)arg1 ;
-(void)_setOrderedViewControllerIdentifiers:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_reloadTabsAnimated:(BOOL)arg1 ;
-(void)setOrderedViewControllerIdentifiers:(id)arg1 animated:(BOOL)arg2 ;
-(id)_navigationControllerIdentifierForViewControllerIdentifier:(id)arg1 ;
-(id)_navigationControllerForNavigationIdentifier:(id)arg1 ;
-(id)_viewControllerIdentifierForNavigationControllerIdentifier:(id)arg1 ;
-(BOOL)displayEmptyTabs;
-(void)setOrderedViewControllerIdentifiers:(NSArray *)arg1 ;
-(void)setSupportsTransiency:(BOOL)arg1 ;
-(NSArray *)visibleViewControllerIdentifiers;
-(void)switchToPlaylistWithPID:(id)arg1 ;
-(id)viewControllerForViewControllerIdentifier:(id)arg1 ;
-(id)_tabBarCustomizableViewControllerIdentifiers;
-(NSArray *)orderedViewControllerIdentifiers;
-(UINavigationController *)radioNavigationController;
-(MusicRadioViewController *)radioViewController;
-(BOOL)supportsTransiency;
-(void)setDisplayEmptyTabs:(BOOL)arg1 ;
-(id<UINavigationControllerDelegate>)navigationControllerDelegate;
-(void)setNavigationControllerDelegate:(id<UINavigationControllerDelegate>)arg1 ;
@end

