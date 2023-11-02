
@interface WFDeleteShortcutEvent : WFEvent {
    NSString * _addToSiriBundleIdentifier;
    NSString * _galleryIdentifier;
    NSString * _key;
    NSString * _shortcutSource;
}

@property (nonatomic, copy) NSString *addToSiriBundleIdentifier;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *shortcutSource;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)addToSiriBundleIdentifier;
- (id)galleryIdentifier;
- (id)key;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutSource:(id)arg1;
- (id)shortcutSource;

@end
