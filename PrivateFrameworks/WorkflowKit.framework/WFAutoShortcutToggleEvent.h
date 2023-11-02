
@interface WFAutoShortcutToggleEvent : WFEvent {
    NSString * _bundleIdentifier;
    bool  _enabled;
    NSString * _key;
    NSString * _source;
    NSString * _toggleType;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *toggleType;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (bool)enabled;
- (id)key;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setToggleType:(id)arg1;
- (id)source;
- (id)toggleType;

@end
