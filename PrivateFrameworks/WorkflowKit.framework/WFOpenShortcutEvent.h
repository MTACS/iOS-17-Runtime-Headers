
@interface WFOpenShortcutEvent : WFEvent {
    unsigned int  _actionCount;
    NSString * _addToSiriBundleIdentifier;
    NSString * _galleryIdentifier;
    NSString * _key;
    NSString * _shortcutSource;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, copy) NSString *addToSiriBundleIdentifier;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *shortcutSource;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (unsigned int)actionCount;
- (id)addToSiriBundleIdentifier;
- (id)galleryIdentifier;
- (id)key;
- (void)setActionCount:(unsigned int)arg1;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutSource:(id)arg1;
- (id)shortcutSource;

@end
