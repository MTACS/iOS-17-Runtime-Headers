
@interface PTAssetReader : NSObject {
    NSString * _YCbCrMatrix;
    AVAsset * _asset;
    unsigned long long  _cachedAccurateFrameCount;
    NSString * _colorPrimaries;
    unsigned long long  _estimatedDataRate;
    struct opaqueCMFormatDescription { } * _formatDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    PTGlobalCinematographyMetadata * _globalCinematographyMetadata;
    PTGlobalRenderingMetadata * _globalRenderingMetadata;
    PTGlobalStabilizationMetadata * _globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadata * _globalVideoHeaderMetadata;
    bool  _is420YUV10Bit;
    NSString * _transferFunction;
    AVAssetReader * assetReader;
    NSMutableArray * composedFrames;
    long long  lastDecodedFrameIndex;
    AVAssetReaderOutputMetadataAdaptor * metadataAdaptor;
    AVMutableVideoComposition * videoComposition;
    AVAssetReaderVideoCompositionOutput * videoCompositionOutput;
}

@property (nonatomic, retain) NSString *YCbCrMatrix;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, retain) NSString *colorPrimaries;
@property (nonatomic, readonly) unsigned long long estimatedDataRate;
@property (nonatomic, readonly) unsigned long long estimatedFrameCount;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, readonly) PTGlobalCinematographyMetadata *globalCinematographyMetadata;
@property (nonatomic, readonly) PTGlobalRenderingMetadata *globalRenderingMetadata;
@property (nonatomic, readonly) PTGlobalStabilizationMetadata *globalStabilizationMetadata;
@property (nonatomic, readonly) PTGlobalVideoHeaderMetadata *globalVideoHeaderMetadata;
@property (nonatomic) bool is420YUV10Bit;
@property (nonatomic, readonly) bool isReadyForReading;
@property (nonatomic, retain) NSString *transferFunction;

+ (void)initialize;

- (void).cxx_destruct;
- (id)YCbCrMatrix;
- (void)_decodeGlobalMetadata;
- (void)_decodeMetadata:(id)arg1;
- (id)asset;
- (id)colorPrimaries;
- (unsigned long long)estimatedDataRate;
- (unsigned long long)estimatedFrameCount;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)frameCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)globalCinematographyMetadata;
- (id)globalRenderingMetadata;
- (id)globalStabilizationMetadata;
- (id)globalVideoHeaderMetadata;
- (id)initWithAsset:(id)arg1;
- (bool)is420YUV10Bit;
- (bool)isReadyForReading;
- (id)nextFrame;
- (id)popComposedFrame;
- (void)pushComposedFrame:(id)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)setIs420YUV10Bit:(bool)arg1;
- (void)setTransferFunction:(id)arg1;
- (void)setYCbCrMatrix:(id)arg1;
- (void)startReadingFrames:(unsigned long long)arg1;
- (bool)startReadingFrames:(unsigned long long)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (bool)startReadingFrames:(unsigned long long)arg1 error:(id*)arg2;
- (void)stopReadingFrames;
- (id)transferFunction;
- (bool)updateFormatPropertiesFromAsset:(id)arg1;

@end
