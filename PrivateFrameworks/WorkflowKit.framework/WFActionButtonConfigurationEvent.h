
@interface WFActionButtonConfigurationEvent : WFEvent {
    NSString * _bundleIdentifier;
    NSString * _intentIdentifier;
    NSString * _key;
    NSString * _sectionIdentifier;
    bool  _success;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *intentIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) bool success;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)intentIdentifier;
- (id)key;
- (id)sectionIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIntentIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
