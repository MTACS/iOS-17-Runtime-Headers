
@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider {
    HMHome * _home;
    NSMutableSet * _items;
    HMUser * _user;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)home;
- (id)init;
- (id)initWithUser:(id)arg1 home:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)user;

@end
