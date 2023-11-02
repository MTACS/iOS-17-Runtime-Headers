
@interface CUINamedImageAtlas : CUINamedLookup {
    struct __CFArray { } * _atlasImages;
    NSDictionary * _images;
    NSArray * _renditions;
}

@property (nonatomic, readonly) bool completeTextureExtrusion;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) NSArray *imageNames;
@property (nonatomic, readonly) struct __CFArray { }*images;
@property (nonatomic, readonly) double scale;

- (bool)completeTextureExtrusion;
- (void)dealloc;
- (struct CGImage { }*)image;
- (id)imageNames;
- (id)imageWithName:(id)arg1;
- (struct __CFArray { }*)images;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6;
- (double)scale;

@end
