
@interface WFSetupGalleryShortcutEvent : WFEvent {
    NSString * _addToSiriBundleIdentifier;
    bool  _completed;
    NSString * _galleryCategoryIdentifier;
    NSString * _galleryIdentifier;
    NSString * _key;
}

@property (nonatomic, copy) NSString *addToSiriBundleIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSString *galleryCategoryIdentifier;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)addToSiriBundleIdentifier;
- (bool)completed;
- (id)galleryCategoryIdentifier;
- (id)galleryIdentifier;
- (id)key;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setGalleryCategoryIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;

@end
