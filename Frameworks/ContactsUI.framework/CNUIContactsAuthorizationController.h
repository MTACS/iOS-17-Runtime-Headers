
@interface CNUIContactsAuthorizationController : NSObject {
    <CNUIContactsAuthorizationControllerDelegate> * _delegate;
    CNUICoreContactsAuthorizationModel * _model;
    CNUIContactsAuthorizationStore * _store;
}

@property (nonatomic, readonly) NSArray *bundleIdentifiersOfAppsWithContactsAccessInfo;
@property (nonatomic) <CNUIContactsAuthorizationControllerDelegate> *delegate;
@property (nonatomic, readonly) bool foundAppsWithContactsAccessInfo;
@property (nonatomic, retain) CNUICoreContactsAuthorizationModel *model;
@property (nonatomic, readonly) CNUIContactsAuthorizationStore *store;

+ (id)authorizationPaneContactsAppLabel;
+ (id)authorizationPaneFooterLabel;
+ (id)authorizationPaneHeaderLabel;
+ (id)validAuthorizationLabelsForValues;
+ (id)validAuthorizationValues;

- (void).cxx_destruct;
- (id)authorizationLevelOfAppWithBundleIdentifier:(id)arg1;
- (id)bundleIdentifiersOfAppsWithContactsAccessInfo;
- (id)createModel;
- (id)delegate;
- (bool)foundAppsWithContactsAccessInfo;
- (id)iconOfAppWithBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)lazilyLoadIconsForRemoteItems;
- (id)model;
- (id)nameOfAppWithBundleIdentifier:(id)arg1;
- (void)saveModel;
- (void)setAuthorizationLevel:(id)arg1 ofAppWithBundleIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (id)store;

@end
