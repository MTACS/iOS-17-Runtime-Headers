
@interface WFGallerySessionBrowseCategoryEvent : WFEvent {
    NSString * _galleryCategoryIdentifier;
    NSString * _key;
    NSString * _sessionIdentifier;
}

@property (nonatomic, copy) NSString *galleryCategoryIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sessionIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)galleryCategoryIdentifier;
- (id)key;
- (id)sessionIdentifier;
- (void)setGalleryCategoryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
