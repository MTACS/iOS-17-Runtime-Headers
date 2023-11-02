
@interface WFGallerySessionAddShortcutEvent : WFEvent {
    NSString * _key;
    NSString * _sessionIdentifier;
    NSString * _shortcutIdentifier;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSString *shortcutIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)key;
- (id)sessionIdentifier;
- (void)setKey:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (id)shortcutIdentifier;

@end
