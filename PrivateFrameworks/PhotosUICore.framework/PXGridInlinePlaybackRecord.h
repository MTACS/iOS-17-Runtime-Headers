
@interface PXGridInlinePlaybackRecord : NSObject {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _bestVideoTimeRange;
    double  _cellSizeScore;
    float  _curationScore;
    long long  _desiredPlayState;
    NSString * _diagnosticLog;
    <PXDisplayAsset> * _displayAsset;
    double  _distanceToCenterScore;
    id  _geometryReference;
    bool  _isInvalid;
    PXMediaProvider * _mediaProvider;
    float  _stickerConfidenceScore;
    float  _videoScore;
    float  _videoStickerSuggestionScore;
    long long  _visibilityScore;
}

@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } bestVideoTimeRange;
@property (nonatomic) double cellSizeScore;
@property (nonatomic, readonly) float curationScore;
@property (nonatomic) long long desiredPlayState;
@property (copy) NSString *diagnosticLog;
@property (readonly, copy) NSString *diagnosticScoresDescription;
@property (nonatomic, readonly) <PXDisplayAsset> *displayAsset;
@property (nonatomic) double distanceToCenterScore;
@property (nonatomic, readonly) id geometryReference;
@property (nonatomic) bool isInvalid;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) float stickerConfidenceScore;
@property (nonatomic, readonly) float videoScore;
@property (nonatomic, readonly) float videoStickerSuggestionScore;
@property (nonatomic) long long visibilityScore;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestVideoTimeRange;
- (double)cellSizeScore;
- (float)curationScore;
- (id)description;
- (long long)desiredPlayState;
- (id)diagnosticLog;
- (id)diagnosticScoresDescription;
- (id)displayAsset;
- (double)distanceToCenterScore;
- (id)geometryReference;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (bool)isInvalid;
- (bool)isPlaying;
- (id)mediaProvider;
- (void)prepareForInvisible;
- (void)prepareForVisible;
- (void)setBestVideoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setCellSizeScore:(double)arg1;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setDiagnosticLog:(id)arg1;
- (void)setDistanceToCenterScore:(double)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setVisibilityScore:(long long)arg1;
- (float)stickerConfidenceScore;
- (float)videoScore;
- (float)videoStickerSuggestionScore;
- (long long)visibilityScore;

@end
