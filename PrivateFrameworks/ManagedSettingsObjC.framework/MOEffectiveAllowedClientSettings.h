
@interface MOEffectiveAllowedClientSettings : NSObject {
    MOEffectiveSettingsStore * _store;
}

@property (readonly) MOEffectiveOptionalApplication *allowedClient;
@property (readonly) MOEffectiveSettingsStore *store;

- (void).cxx_destruct;
- (id)allowedClient;
- (id)init;
- (id)store;

@end
