
@interface BFFFlow : NSObject <BFFFlowDelegate, BFFFlowItem, BFFFlowItemDelegate, BFFNavigationControllerDelegate> {
    NSArray * _classList;
    NSMutableArray * _controllers;
    <BFFFlowDelegate> * _delegate;
    UIViewController<BFFFlowItem> * _firstController;
    <BFFFlowItemDelegate> * _flowItemDelegate;
    id /* block */  _injector;
    BFFNavigationController * _navigationController;
    <BFFNavigationFlowDelegate> * _navigationFlowDelegate;
    BFFFlowStarter * _starter;
}

@property (nonatomic, retain) NSArray *classList;
@property (nonatomic, retain) NSMutableArray *controllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BFFFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<BFFFlowItem> *firstController;
@property (nonatomic) <BFFFlowItemDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ injector;
@property (nonatomic, readonly) BFFNavigationController *navigationController;
@property (nonatomic, readonly) <BFFNavigationFlowDelegate> *navigationFlowDelegate;
@property (nonatomic, readonly) BFFFlowStarter *starter;
@property (readonly) Class superclass;

+ (id)allowedFlowItems;
+ (unsigned long long)applicableDispositions;
+ (id)cloudConfigSkipKey;

- (void).cxx_destruct;
- (id)_viewControllerForBuddyController:(id)arg1;
- (id)classList;
- (void)configureFlowItem:(id)arg1;
- (id)controllerFollowingControllerClass:(Class)arg1 requestedNext:(Class)arg2;
- (bool)controllerNeedsToRunForClass:(Class)arg1;
- (id)controllers;
- (id)createConditionalFlowItemForClass:(Class)arg1;
- (id)createFlowItem:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)firstController;
- (id)firstItem;
- (void)flow:(id)arg1 finishedWithLastItem:(id)arg2 nextItem:(id)arg3;
- (void)flowItemCancelled:(id)arg1;
- (id)flowItemDelegate;
- (void)flowItemDone:(id)arg1;
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;
- (id)initWithNavigationController:(id)arg1 flowDelegate:(id)arg2 flowStarter:(id)arg3 dependencyInjector:(id /* block */)arg4;
- (id /* block */)injector;
- (bool)isFlowItemOnTop:(id)arg1;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationFlowDelegate;
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(bool)arg2;
- (id)popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(bool)arg3;
- (id)precedingItems;
- (id)precedingItemsClasses;
- (void)presentWiFiPaneForFlow:(id)arg1;
- (void)pushFlowItem:(id)arg1 animated:(bool)arg2;
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 animated:(bool)arg3;
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(bool)arg3 animated:(bool)arg4;
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(bool)arg3 animated:(bool)arg4 willPushFlowItem:(id /* block */)arg5;
- (void)removeViewControllersOnNextPush:(id)arg1;
- (bool)responsibleForViewController:(id)arg1;
- (void)setClassList:(id)arg1;
- (void)setControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstController:(id)arg1;
- (void)setFlowItemDelegate:(id)arg1;
- (void)startFlowAnimated:(bool)arg1;
- (void)startFlowWithAllFlowItems;
- (id)starter;
- (id)viewControllers;

@end
