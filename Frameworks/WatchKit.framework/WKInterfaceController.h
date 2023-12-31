
@interface WKInterfaceController : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    WKCrownSequencer * _crownSequencer;
    NSMutableDictionary * _gestureRecognizers;
    NSMutableArray * _pendingGestureInstallationFinishedBlocks;
    NSArray * _properties;
    NSArray * _topLevelObjects;
    NSMutableArray * _uninstalledGestureIDs;
    NSString * _viewControllerID;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) WKCrownSequencer *crownSequencer;
@property (nonatomic, retain) NSMutableDictionary *gestureRecognizers;
@property (nonatomic, retain) NSMutableArray *pendingGestureInstallationFinishedBlocks;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, retain) NSArray *topLevelObjects;
@property (nonatomic, retain) NSMutableArray *uninstalledGestureIDs;
@property (nonatomic, retain) NSString *viewControllerID;

+ (void)_insertPageControllersAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)_movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)_removePageControllersAtIndexes:(id)arg1;
+ (bool)openParentApplication:(id)arg1 reply:(id /* block */)arg2;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
+ (double)screenScale;

- (void).cxx_destruct;
- (void)_handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2 remoteNotification:(id)arg3 localNotification:(id)arg4;
- (void)addMenuItemWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithImageNamed:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)addMenuItemWithItemIcon:(long long)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
- (void)awakeWithContext:(id)arg1;
- (void)becomeCurrentPage;
- (void)beginGlanceUpdates;
- (void)clearAllMenuItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contextForSegueWithIdentifier:(id)arg1;
- (id)contextForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3;
- (id)contextsForSegueWithIdentifier:(id)arg1;
- (id)contextsForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3;
- (id)crownSequencer;
- (void)didAppear;
- (void)didDeactivate;
- (void)didRegisterWithRemoteInterface;
- (void)dismissAddPassesController;
- (void)dismissController;
- (void)dismissTextInputController;
- (void)endGlanceUpdates;
- (id)gestureRecognizers;
- (void)handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2;
- (void)handleUserActivity:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)interfaceDidScrollToTop;
- (void)interfaceOffsetDidScrollToBottom;
- (void)interfaceOffsetDidScrollToTop;
- (void)invalidateUserActivity;
- (id)pendingGestureInstallationFinishedBlocks;
- (void)pickerDidFocus:(id)arg1;
- (void)pickerDidResignFocus:(id)arg1;
- (void)pickerDidSettle:(id)arg1;
- (void)popController;
- (void)popToRootController;
- (void)presentAddPassesControllerWithPasses:(id)arg1 completion:(id /* block */)arg2;
- (void)presentControllerWithName:(id)arg1 context:(id)arg2;
- (void)presentControllerWithNames:(id)arg1 contexts:(id)arg2;
- (void)presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)presentTextInputControllerWithSuggestionsForLanguage:(id /* block */)arg1 allowedInputMode:(long long)arg2 completion:(id /* block */)arg3;
- (id)properties;
- (void)pushControllerWithName:(id)arg1 context:(id)arg2;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setPendingGestureInstallationFinishedBlocks:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopLevelObjects:(id)arg1;
- (void)setUninstalledGestureIDs:(id)arg1;
- (void)setViewControllerID:(id)arg1;
- (void)table:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)topLevelObjects;
- (id)uninstalledGestureIDs;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3;
- (id)viewControllerID;
- (void)willActivate;
- (void)willDisappear;

@end
