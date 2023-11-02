
@interface MOEffectiveAccountSettings : NSObject {
    MOEffectiveSettingsStore * _store;
}

@property (readonly) MOEffectiveBool *denyiCloudLogout;
@property (readonly) MOEffectiveSettingsStore *store;

- (void).cxx_destruct;
- (id)denyiCloudLogout;
- (id)init;
- (id)store;

@end
