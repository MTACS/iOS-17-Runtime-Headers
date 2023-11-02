
@interface NUNIRenderer : NSObject {
    unsigned long long  _pixelFormat;
    unsigned long long  _rendererStyle;
    NSString * _textureSuffix;
}

@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long rendererStyle;
@property (nonatomic, readonly) NSString *textureSuffix;

+ (void)_deallocInstanceWithPixelFormat:(unsigned long long)arg1 rendererStyle:(unsigned long long)arg2;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1 textureSuffix:(id)arg2 rendererStyle:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)dealloc;
- (void)discard;
- (id)initWithPixelFormat:(unsigned long long)arg1 textureSuffix:(id)arg2 rendererStyle:(unsigned long long)arg3;
- (unsigned long long)pixelFormat;
- (void)purgeUnusedWithScene:(id)arg1;
- (void)renderOffscreenWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 renderEncoder:(id)arg3;
- (unsigned long long)rendererStyle;
- (id)spheroidAtPoint:(void *)arg1 scene:(void *)arg2 viewport:(void *)arg3; // needs 3 arg types, found 2: id, struct NUNIViewport { int x1; int x2; }
- (id)textureSuffix;

@end
