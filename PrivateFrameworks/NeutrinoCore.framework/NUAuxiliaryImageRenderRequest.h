
@interface NUAuxiliaryImageRenderRequest : NURenderRequest {
    long long  _auxiliaryImageType;
    bool  _skipRenderIfNotRequired;
}

@property long long auxiliaryImageType;
@property bool skipRenderIfNotRequired;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (long long)auxiliaryImageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)setAuxiliaryImageType:(long long)arg1;
- (void)setSkipRenderIfNotRequired:(bool)arg1;
- (bool)skipRenderIfNotRequired;
- (void)submit:(id /* block */)arg1;
- (id)submitSynchronous:(out id*)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (struct CGImage { }*)createGainMapForComposition:(id)arg1;

@end
