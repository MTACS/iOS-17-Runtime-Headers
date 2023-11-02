
@interface AMUIPosterExtensionSwitcherItem : NSObject <AMUISwitcherItem> {
    NSArray * _configurations;
    <AMUIDateProviding> * _dateProvider;
    AMUIPosterCategoryViewController * _posterCategoryViewController;
    <AMUIPosterCategoryViewControllerDelegate> * _posterCategoryViewControllerDelegate;
    NSString * _providerBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSObject> *identifier;
@property (nonatomic, readonly) UIView *itemView;
@property (nonatomic, readonly) UIViewController *itemViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)initWithProviderBundleIdentifier:(id)arg1 configurations:(id)arg2 posterCategoryViewControllerDelegate:(id)arg3 dateProvider:(id)arg4;
- (void)invalidate;
- (id)itemView;
- (id)itemViewController;
- (void)switcherItemDidAppear:(id)arg1;
- (void)switcherItemDidDisappear:(id)arg1;
- (void)switcherItemWillAppear:(id)arg1;
- (void)switcherItemWillDisappear:(id)arg1;

@end
