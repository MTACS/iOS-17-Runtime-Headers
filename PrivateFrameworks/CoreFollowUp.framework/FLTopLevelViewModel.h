
@interface FLTopLevelViewModel : NSObject <FLViewModel> {
    NSString * _bundleIdentifier;
    FLFollowUpController * _controller;
    NSString * _localizedDeviceRowTitle;
    FLItemChangeObserver * _observer;
    NSMutableDictionary * _timersByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedDeviceRowTitle;
@property (readonly) Class superclass;

+ (id)_prefixFromBundleIdentifier:(id)arg1;
+ (id)redirectURLForItem:(id)arg1 withAction:(id)arg2;

- (void).cxx_destruct;
- (void)_configureTimerForItem:(id)arg1;
- (id)_groupsForPrimaryAccount:(id)arg1 secondaryAccounts:(id)arg2 simpleAccountGrouping:(bool)arg3;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeTimerForItem:(id)arg1;
- (void)_updateTimerItems:(id)arg1;
- (id)allPendingItems;
- (void)dealloc;
- (id)extensionToItemMapFromItems:(id)arg1;
- (id)groups;
- (id)groupsForPrimaryAccount:(id)arg1 secondaryAccounts:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 controller:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)localizedDeviceRowTitle;
- (void)mapItems:(id)arg1 toGroups:(id)arg2 unknownGroup:(id)arg3 deviceGroup:(id)arg4 simpleAccountGrouping:(bool)arg5;
- (void)refreshItems:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setItemChangeHandler:(id /* block */)arg1;
- (void)setLocalizedDeviceRowTitle:(id)arg1;

@end
