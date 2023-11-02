
@interface WFShowWidgetConfigurationEvent : WFEvent {
    NSString * _appBundleIdentifier;
    NSString * _intentType;
    bool  _isInteractive;
    NSString * _key;
    NSString * _sizeClass;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *intentType;
@property (nonatomic) bool isInteractive;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sizeClass;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2 sizeClass:(id)arg3;
- (id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2 sizeClass:(id)arg3 interactive:(bool)arg4;
- (id)intentType;
- (bool)isInteractive;
- (id)key;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setIsInteractive:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSizeClass:(id)arg1;
- (id)sizeClass;

@end
