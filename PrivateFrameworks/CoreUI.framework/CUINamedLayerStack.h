
@interface CUINamedLayerStack : CUINamedLookup <CUINamedLayerStackProtocol> {
    CUIThemeRendition * _flattenedImageRendition;
    NSArray * _layers;
    CUIThemeRendition * _radiosityImageRendition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGImage { }*flattenedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layers;
@property (nonatomic, readonly) struct CGImage { }*radiosityImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })_doRadiosityBlurOnPixelBuffer:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(bool*)arg7 adjustedSize:(struct CGSize { double x1; double x2; }*)arg8;
+ (struct CGImage { }*)createRadiosityImageWithImage:(struct CGImage { }*)arg1 displayScale:(long long)arg2;
+ (void)radiosityImageWithImage:(struct CGImage { }*)arg1 displayScale:(long long)arg2 completionHandler:(id /* block */)arg3;

- (void)dealloc;
- (struct CGImage { }*)flattenedImage;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (id)layerImageAtIndex:(unsigned long long)arg1;
- (id)layers;
- (struct CGImage { }*)radiosityImage;
- (void)setLayers:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)configuration;
- (id)flattenedUIImageWithAsset:(id)arg1 configuration:(id)arg2;

@end
