
@interface CUINamedSolidLayerStack : CUINamedLookup <CUINamedLayerStackProtocol> {
    CUIThemeRendition * _flattenedImageRendition;
    NSArray * _layers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGImage { }*flattenedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layers;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (void)dealloc;
- (struct CGImage { }*)flattenedImage;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (id)layerImageAtIndex:(unsigned long long)arg1;
- (id)layers;
- (void)setLayers:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
