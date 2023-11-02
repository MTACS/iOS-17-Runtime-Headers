
@interface WFShareShortcutEvent : WFEvent {
    unsigned int  _actionCount;
    NSString * _addToSiriBundleIdentifier;
    NSString * _galleryIdentifier;
    NSString * _key;
    NSString * _sharingDestinationBundleIdentifier;
    NSString * _sharingMode;
    int  _source;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, copy) NSString *addToSiriBundleIdentifier;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sharingDestinationBundleIdentifier;
@property (nonatomic, copy) NSString *sharingMode;
@property (nonatomic) int source;

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
- (void)setSharingDestinationBundleIdentifier:(id)arg1;
- (void)setSharingMode:(id)arg1;
- (void)setSource:(int)arg1;
- (id)sharingDestinationBundleIdentifier;
- (id)sharingMode;
- (int)source;

@end
