
@interface PIRetouchSourceNode : NUCISourceNode {
    NSString * _cacheKey;
    <NUBufferImage> * _renderedImage;
    <NUMutableBufferImage> * _retouchImage;
    NSArray * _strokes;
}

+ (id)intermediateCacheForSubsample:(bool)arg1;

- (void).cxx_destruct;
- (void)_performRetouchIfNeeded;
- (void)applyRetouchStrokes:(id)arg1 toImage:(id)arg2;
- (id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3;
- (id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3;
- (id)initWithInputImage:(id)arg1 retouchStrokes:(id)arg2 detectedFaces:(id)arg3 cacheKey:(id)arg4;
- (void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7;

@end
