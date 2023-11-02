
@interface WFRemoteWidgetConfigurationEvent : WFEvent {
    NSString * _bundleIdentifier;
    NSString * _key;
    NSString * _sizeClass;
    NSString * _widgetIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sizeClass;
@property (nonatomic, copy) NSString *widgetIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)key;
- (void)setBundleIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSizeClass:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (id)sizeClass;
- (id)widgetIdentifier;

@end
