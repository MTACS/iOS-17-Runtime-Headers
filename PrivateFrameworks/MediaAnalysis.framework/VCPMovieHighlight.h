
@interface VCPMovieHighlight : NSObject {
    float  _actionScore;
    float  _autoplayScore;
    float  _averageScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bestPlaybackCrop;
    NSData * _colorNormalization;
    VCPImageDescriptor * _descriptor;
    float  _exposureChangeScore;
    float  _expressionScore;
    float  _flashScore;
    float  _humanActionScore;
    float  _humanPoseScore;
    bool  _isAutoPlayable;
    bool  _isSettlingOK;
    bool  _isTrimmed;
    float  _junkScore;
    VCPVideoKeyFrame * _keyFrame;
    float  _motionScore;
    float  _qualityScore;
    float  _score;
    float  _sharpnessScore;
    float  _subjectScore;
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
    }  _timerange;
    float  _voiceScore;
    float  _zoomChangeScore;
}

@property (nonatomic) float actionScore;
@property (nonatomic) float autoplayScore;
@property (nonatomic) float averageScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bestPlaybackCrop;
@property (nonatomic, retain) NSData *colorNormalization;
@property (nonatomic, retain) VCPImageDescriptor *descriptor;
@property (nonatomic) float exposureChangeScore;
@property (nonatomic) float expressionScore;
@property (nonatomic) float flashScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) bool isAutoPlayable;
@property (nonatomic) bool isSettlingOK;
@property (nonatomic) bool isTrimmed;
@property (nonatomic) float junkScore;
@property (nonatomic, retain) VCPVideoKeyFrame *keyFrame;
@property (nonatomic) float motionScore;
@property (nonatomic) float qualityScore;
@property (nonatomic) float score;
@property (nonatomic) float sharpnessScore;
@property (nonatomic) float subjectScore;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timerange;
@property (nonatomic) float voiceScore;
@property (nonatomic) float zoomChangeScore;

- (void).cxx_destruct;
- (float)actionScore;
- (float)autoplayScore;
- (float)averageScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestPlaybackCrop;
- (void)checkAutoPlayable;
- (id)colorNormalization;
- (void)copyScoresFrom:(id)arg1;
- (id)descriptor;
- (float)exposureChangeScore;
- (float)expressionScore;
- (float)flashScore;
- (float)humanActionScore;
- (float)humanPoseScore;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isAutoPlayable;
- (bool)isSettlingOK;
- (bool)isShort;
- (bool)isTrimmed;
- (float)junkScore;
- (id)keyFrame;
- (void)mergeSegment:(id)arg1;
- (float)motionScore;
- (float)qualityScore;
- (float)score;
- (void)setActionScore:(float)arg1;
- (void)setAutoplayScore:(float)arg1;
- (void)setAverageScore:(float)arg1;
- (void)setBestPlaybackCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColorNormalization:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setExposureChangeScore:(float)arg1;
- (void)setExpressionScore:(float)arg1;
- (void)setFlashScore:(float)arg1;
- (void)setHumanActionScore:(float)arg1;
- (void)setHumanPoseScore:(float)arg1;
- (void)setIsAutoPlayable:(bool)arg1;
- (void)setIsSettlingOK:(bool)arg1;
- (void)setIsTrimmed:(bool)arg1;
- (void)setJunkScore:(float)arg1;
- (void)setKeyFrame:(id)arg1;
- (void)setMotionScore:(float)arg1;
- (void)setQualityScore:(float)arg1;
- (void)setScore:(float)arg1;
- (void)setSharpnessScore:(float)arg1;
- (void)setSubjectScore:(float)arg1;
- (void)setTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVoiceScore:(float)arg1;
- (void)setZoomChangeScore:(float)arg1;
- (float)sharpnessScore;
- (float)subjectScore;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timerange;
- (float)voiceScore;
- (float)zoomChangeScore;

@end
