
@interface AVAssetWriterConfigurationState : NSObject {
    NSURL * _URL;
    <AVAssetWriterDelegate> * _delegate;
    NSURL * _directoryForTemporaryFiles;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _initialMovieFragmentInterval;
    long long  _initialMovieFragmentSequenceNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _initialSegmentStartTime;
    NSArray * _inputGroups;
    NSArray * _inputs;
    AVMediaFileType * _mediaFileType;
    NSArray * _metadataItems;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieFragmentInterval;
    int  _movieTimeScale;
    NSString * _outputFileTypeProfile;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _overallDurationHint;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _preferredOutputSegmentInterval;
    float  _preferredRate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    float  _preferredVolume;
    bool  _producesCombinableFragments;
    bool  _requiresInProcessOperation;
    bool  _shouldOptimizeForNetworkUse;
    long long  _singlePassFileSize;
    long long  _singlePassMediaDataSize;
    bool  _usesVirtualCaptureCard;
}

@property (nonatomic, copy) NSURL *URL;
@property <AVAssetWriterDelegate> *delegate;
@property (nonatomic, copy) NSURL *directoryForTemporaryFiles;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } initialMovieFragmentInterval;
@property (nonatomic) long long initialMovieFragmentSequenceNumber;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } initialSegmentStartTime;
@property (nonatomic, copy) NSArray *inputGroups;
@property (nonatomic, copy) NSArray *inputs;
@property (nonatomic, copy) AVMediaFileType *mediaFileType;
@property (nonatomic, copy) NSArray *metadataItems;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic) int movieTimeScale;
@property (nonatomic, copy) NSString *outputFileTypeProfile;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } overallDurationHint;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredOutputSegmentInterval;
@property (nonatomic) float preferredRate;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) bool producesCombinableFragments;
@property (nonatomic) bool requiresInProcessOperation;
@property (nonatomic) bool shouldOptimizeForNetworkUse;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (nonatomic) bool usesVirtualCaptureCard;

- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (id)delegate;
- (id)directoryForTemporaryFiles;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialMovieFragmentInterval;
- (long long)initialMovieFragmentSequenceNumber;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialSegmentStartTime;
- (id)inputGroups;
- (id)inputs;
- (id)mediaFileType;
- (id)metadataItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (id)outputFileTypeProfile;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredOutputSegmentInterval;
- (float)preferredRate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (bool)producesCombinableFragments;
- (bool)requiresInProcessOperation;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setInitialMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;
- (void)setInitialSegmentStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInputGroups:(id)arg1;
- (void)setInputs:(id)arg1;
- (void)setMediaFileType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setOutputFileTypeProfile:(id)arg1;
- (void)setOverallDurationHint:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredOutputSegmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProducesCombinableFragments:(bool)arg1;
- (void)setRequiresInProcessOperation:(bool)arg1;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (void)setSinglePassFileSize:(long long)arg1;
- (void)setSinglePassMediaDataSize:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setUsesVirtualCaptureCard:(bool)arg1;
- (bool)shouldOptimizeForNetworkUse;
- (long long)singlePassFileSize;
- (long long)singlePassMediaDataSize;
- (bool)usesVirtualCaptureCard;

@end
