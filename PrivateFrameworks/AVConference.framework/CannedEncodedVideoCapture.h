
@interface CannedEncodedVideoCapture : NSObject <VCCannedVideoFrameFeeder> {
    int  _allFrameCount;
    double  _allFrameRate;
    AVAssetReader * _assetReader;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _attributeMutex;
    AVURLAsset * _compressedFileAsset;
    int  _frameCount;
    int  _height;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _inputMutex;
    AVAssetReaderOutputMetadataAdaptor * _metadataAdaptor;
    AVAssetTrack * _metadataTrack;
    NSString * _movieURLString;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    AVAssetReaderTrackOutput * _readerMetadataTrackOutput;
    AVAssetReaderTrackOutput * _readerVideoTrackOutput;
    struct __CVPixelBufferPool { } * _rotatedPixelBufferPool;
    VideoScaler * _videoScaler;
    AVAssetTrack * _videoTrack;
    int  _width;
}

@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic, retain) AVAssetReader *assetReader;
@property (nonatomic, retain) AVURLAsset *compressedFileAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frameCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) int height;
@property (nonatomic, retain) AVAssetReaderOutputMetadataAdaptor *metadataAdaptor;
@property (nonatomic, retain) AVAssetTrack *metadataTrack;
@property (nonatomic, retain) NSString *movieURLString;
@property (nonatomic, retain) AVAssetReaderTrackOutput *readerMetadataTrackOutput;
@property (nonatomic, retain) AVAssetReaderTrackOutput *readerVideoTrackOutput;
@property (readonly) Class superclass;
@property (nonatomic, retain) VideoScaler *videoScaler;
@property (nonatomic, retain) AVAssetTrack *videoTrack;
@property (nonatomic) int width;

- (int)allFrameCount;
- (double)allFrameRate;
- (id)assetReader;
- (void)attachMetadataToPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)compressedFileAsset;
- (struct __CVBuffer { }*)createPixelBufferForFrameIndex:(int)arg1;
- (void)dealloc;
- (int)finalizeVideoCapture;
- (int)frameCount;
- (void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
- (int)height;
- (id)initWithPath:(id)arg1;
- (int)initialize;
- (int)initializeAssetReader;
- (int)loadCannedMediaAssets;
- (int)loadMetadataTrackFromList:(id)arg1 error:(id)arg2;
- (int)loadVideoTrackFromList:(id)arg1 error:(id)arg2;
- (id)metadataAdaptor;
- (id)metadataTrack;
- (id)movieURLString;
- (id)readerMetadataTrackOutput;
- (id)readerVideoTrackOutput;
- (void)setAllFrameCount:(int)arg1;
- (void)setAllFrameRate:(double)arg1;
- (void)setAssetReader:(id)arg1;
- (void)setCompressedFileAsset:(id)arg1;
- (void)setFrameCount:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setMetadataAdaptor:(id)arg1;
- (void)setMetadataTrack:(id)arg1;
- (void)setMovieURLString:(id)arg1;
- (void)setReaderMetadataTrackOutput:(id)arg1;
- (void)setReaderVideoTrackOutput:(id)arg1;
- (void)setVideoScaler:(id)arg1;
- (void)setVideoTrack:(id)arg1;
- (void)setWidth:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (id)videoScaler;
- (id)videoTrack;
- (int)width;

@end
