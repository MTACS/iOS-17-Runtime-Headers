
@interface PVFrameSet : NSObject {
    PVImageBuffer * _alphaMaskImageBuffer;
    PVCMSampleBuffer * _colorSampleBuffer;
    AVDepthData * _depthData;
    <MTLTexture> * _dilatedDepth;
    <MTLTexture> * _matte;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { 
        struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _mdLock;
    NSMutableDictionary * _metadata;
}

@property (retain) PVImageBuffer *alphaMaskImageBuffer;
@property (nonatomic, readonly) PVImageBuffer *colorImageBuffer;
@property (nonatomic, readonly) PVCMSampleBuffer *colorSampleBuffer;
@property (nonatomic, readonly) AVDepthData *depthData;
@property (nonatomic, readonly) <MTLTexture> *dilatedDepth;
@property (nonatomic, readonly) <MTLTexture> *matte;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

+ (id)frameSetWithARFrame:(id)arg1 depthData:(id)arg2 depthFreshness:(int)arg3 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
+ (id)frameSetWithARFrame:(id)arg1 depthData:(id)arg2 depthFreshness:(int)arg3 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 matte:(id)arg5 dilatedDepth:(id)arg6;
+ (id)frameSetWithARFrame:(id)arg1 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)frameSetWithARFrame:(id)arg1 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 matte:(id)arg3 dilatedDepth:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)alphaMaskImageBuffer;
- (id)colorImageBuffer;
- (id)colorSampleBuffer;
- (void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 matte:(id)arg4 dilatedDepth:(id)arg5;
- (id)depthData;
- (id)dilatedDepth;
- (id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 matte:(id)arg4 dilatedDepth:(id)arg5;
- (id)initWithColorBuffer:(id)arg1 metadata:(id)arg2;
- (id)matte;
- (id)metadataDict;
- (id)metadataObjectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)setAlphaMaskImageBuffer:(id)arg1;
- (void)setMetadataDict:(id)arg1;
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;

@end
