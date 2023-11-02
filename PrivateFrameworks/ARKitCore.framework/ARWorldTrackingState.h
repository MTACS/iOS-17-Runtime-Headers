
@interface ARWorldTrackingState : NSObject <ARDaemonSecureCoding, NSCopying> {
    NSArray * _collaborationStats;
    unsigned long long  _currentVIOMapSize;
    ARInertialState * _inertialState;
    double  _lastMajorRelocalizationTimestamp;
    bool  _majorRelocalization;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _majorRelocalizationCameraTransform;
    NSArray * _mergedSessionIdentifiers;
    bool  _minorRelocalization;
    unsigned long long  _numberOfCameraSwitches;
    double  _originTimestamp;
    bool  _poseGraphUpdated;
    double  _poseTimestamp;
    long long  _reason;
    unsigned long long  _reinitializationAttempts;
    long long  _state;
    long long  _vioTrackingState;
}

@property (nonatomic, retain) NSArray *collaborationStats;
@property (nonatomic) unsigned long long currentVIOMapSize;
@property (nonatomic, retain) ARInertialState *inertialState;
@property (nonatomic) double lastMajorRelocalizationTimestamp;
@property (nonatomic) bool majorRelocalization;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } majorRelocalizationCameraTransform;
@property (nonatomic, retain) NSArray *mergedSessionIdentifiers;
@property (nonatomic) bool minorRelocalization;
@property (nonatomic) unsigned long long numberOfCameraSwitches;
@property (nonatomic) double originTimestamp;
@property (nonatomic) bool poseGraphUpdated;
@property (nonatomic) double poseTimestamp;
@property (nonatomic) long long reason;
@property (nonatomic) unsigned long long reinitializationAttempts;
@property (nonatomic) long long state;
@property (nonatomic) long long vioTrackingState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationStats;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentVIOMapSize;
- (void)encodeWithCoder:(id)arg1;
- (id)inertialState;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)lastMajorRelocalizationTimestamp;
- (bool)majorRelocalization;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })majorRelocalizationCameraTransform;
- (id)mergedSessionIdentifiers;
- (bool)minorRelocalization;
- (unsigned long long)numberOfCameraSwitches;
- (double)originTimestamp;
- (bool)poseGraphUpdated;
- (double)poseTimestamp;
- (long long)reason;
- (unsigned long long)reinitializationAttempts;
- (void)setCollaborationStats:(id)arg1;
- (void)setCurrentVIOMapSize:(unsigned long long)arg1;
- (void)setInertialState:(id)arg1;
- (void)setLastMajorRelocalizationTimestamp:(double)arg1;
- (void)setMajorRelocalization:(bool)arg1;
- (void)setMajorRelocalizationCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setMergedSessionIdentifiers:(id)arg1;
- (void)setMinorRelocalization:(bool)arg1;
- (void)setNumberOfCameraSwitches:(unsigned long long)arg1;
- (void)setOriginTimestamp:(double)arg1;
- (void)setPoseGraphUpdated:(bool)arg1;
- (void)setPoseTimestamp:(double)arg1;
- (void)setReason:(long long)arg1;
- (void)setReinitializationAttempts:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setVioTrackingState:(long long)arg1;
- (long long)state;
- (long long)vioTrackingState;

@end
