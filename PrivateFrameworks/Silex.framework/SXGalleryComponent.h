
@interface SXGalleryComponent : SXComponent

@property (nonatomic, readonly) NSString *galleryType;
@property (nonatomic, readonly) SXJSONArray *items;

+ (id)typeString;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)traits;

@end
