
@interface MOEffectiveUserSettings : NSObject {
    MOEffectiveSettingsStore * _store;
}

@property (readonly) MOEffectiveString *sharingPolicy;
@property (readonly) MOEffectiveSettingsStore *store;

- (void).cxx_destruct;
- (id)init;
- (id)sharingPolicy;
- (id)store;

@end
