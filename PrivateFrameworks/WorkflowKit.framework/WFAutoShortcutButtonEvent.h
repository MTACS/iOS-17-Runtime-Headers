
@interface WFAutoShortcutButtonEvent : WFEvent {
    NSString * _bundleIdentifier;
    NSString * _key;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)key;
- (void)setBundleIdentifier:(id)arg1;
- (void)setKey:(id)arg1;

@end
