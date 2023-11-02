
@interface WFShowFocusConfigurationEvent : WFEvent {
    NSString * _appBundleIdentifier;
    NSString * _intentType;
    NSString * _key;
    NSString * _systemFilterType;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *intentType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *systemFilterType;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2;
- (id)initWithSystemFilterType:(id)arg1;
- (id)intentType;
- (id)key;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSystemFilterType:(id)arg1;
- (id)systemFilterType;

@end
