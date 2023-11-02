
@interface JTVideoMediaUtils : NSObject {
    bool  _cacheWillDieDuringLoad;
    bool  _cachedAssetInformationValid;
    unsigned long long  _cachedAudioTrackCount;
    unsigned int  _cachedCodec4cc;
    PVColorSpace * _cachedColorSpace;
    int  _cachedDurationAt30fps;
    float  _cachedFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedNaturalSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedPreciseAssetDuration;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _cachedTransform;
    unsigned long long  _cachedVideoTrackCount;
}

@property (nonatomic) bool cacheWillDieDuringLoad;
@property (nonatomic) bool cachedAssetInformationValid;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (nonatomic, retain) PVColorSpace *cachedColorSpace;
@property (nonatomic) int cachedDurationAt30fps;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedNaturalSize;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedPreciseAssetDuration;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cachedTransform;
@property (nonatomic) unsigned long long cachedVideoTrackCount;

- (void).cxx_destruct;
- (void)cacheTrackInformationWithAVAsset:(id)arg1;
- (bool)cacheWillDieDuringLoad;
- (bool)cachedAssetInformationValid;
- (unsigned long long)cachedAudioTrackCount;
- (unsigned int)cachedCodec4cc;
- (id)cachedColorSpace;
- (int)cachedDurationAt30fps;
- (float)cachedFrameRate;
- (struct CGSize { double x1; double x2; })cachedNaturalSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedPreciseAssetDuration;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cachedTransform;
- (unsigned long long)cachedVideoTrackCount;
- (id)colorSpace;
- (int)durationAt30fpsWithAssetDuration:(double)arg1;
- (float)frameRate;
- (bool)hasAudibleCharacteristicWithIsMissing:(bool)arg1;
- (bool)hasAudioTracks;
- (bool)hasVideoTracks;
- (void)invalidateCachedAssetInformation;
- (bool)isOriginalHEVC4k;
- (bool)isProRes;
- (bool)isUnsupportedAudio;
- (struct CGSize { double x1; double x2; })naturalSizeWithIsMissing:(bool)arg1 asset:(id)arg2;
- (void)requestAVAssetAsyncWithAsset:(id)arg1 needsDerivativeMedia:(bool)arg2 frameRate:(float)arg3 completion:(id /* block */)arg4;
- (void)setCacheWillDieDuringLoad:(bool)arg1;
- (void)setCachedAssetInformationValid:(bool)arg1;
- (void)setCachedAudioTrackCount:(unsigned long long)arg1;
- (void)setCachedCodec4cc:(unsigned int)arg1;
- (void)setCachedColorSpace:(id)arg1;
- (void)setCachedDurationAt30fps:(int)arg1;
- (void)setCachedFrameRate:(float)arg1;
- (void)setCachedNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedPreciseAssetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCachedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCachedVideoTrackCount:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
