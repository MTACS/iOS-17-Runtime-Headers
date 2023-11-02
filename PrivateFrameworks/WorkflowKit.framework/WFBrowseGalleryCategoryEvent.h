
@interface WFBrowseGalleryCategoryEvent : WFEvent {
    NSString * _galleryCategoryIdentifier;
    NSString * _key;
}

@property (nonatomic, copy) NSString *galleryCategoryIdentifier;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)galleryCategoryIdentifier;
- (id)key;
- (void)setGalleryCategoryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;

@end
