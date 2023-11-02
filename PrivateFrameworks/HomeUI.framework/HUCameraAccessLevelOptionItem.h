
@interface HUCameraAccessLevelOptionItem : HFItem {
    unsigned long long  _accessLevel;
    HMHome * _home;
    HMUser * _user;
}

@property (nonatomic, readonly) unsigned long long accessLevel;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)accessLevel;
- (id)home;
- (id)initWithUser:(id)arg1 home:(id)arg2 accessLevel:(unsigned long long)arg3;
- (id)user;

@end
