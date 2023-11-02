
@interface RSCaptureConfiguration : NSObject <NSCopying> {
    bool  _bayWindowRecessedAreaEnabled;
    bool  _boundaryRefinementEnabled;
    unsigned long long  _coachingMaxFrameRate;
    bool  _curvedWallEnabled;
    bool  _doorReplaceOpeningEnabled;
    bool  _doorWindowBeautificationEnabled;
    bool  _driftDetectionEnabled;
    bool  _liveResultEnabled;
    bool  _markerCoachingEnabled;
    unsigned long long  _maxFramerate;
    bool  _mirrorDetectionEnabled;
    bool  _nonUniformHeightEnabled;
    bool  _objectBeautificationEnabled;
    bool  _onboardingEnabled;
    bool  _opendoorReplaceOpeningEnabled;
    bool  _openingReplaceOpendoorEnabled;
    bool  _standardizationEnabled;
    bool  _textCoachingEnabled;
    bool  _uniformHeightPolygonEnabled;
    bool  _windowDoorDetectionEnabled;
}

@property (getter=isBayWindowRecessedAreaEnabled, nonatomic) bool bayWindowRecessedAreaEnabled;
@property (getter=isBoundaryRefinementEnabled, nonatomic) bool boundaryRefinementEnabled;
@property (getter=isDoorReplaceOpeningEnabled, nonatomic) bool doorReplaceOpeningEnabled;
@property (getter=isDoorWindowBeautificationEnabled, nonatomic) bool doorWindowBeautificationEnabled;
@property (getter=isDriftDetectionEnabled, nonatomic) bool driftDetectionEnabled;
@property (getter=isLiveResultEnabled, nonatomic) bool liveResultEnabled;
@property (getter=isMarkerCoachingEnabled, nonatomic) bool markerCoachingEnabled;
@property (nonatomic) unsigned long long maxFramerate;
@property (getter=isNonUniformHeightEnabled, nonatomic) bool nonUniformHeightEnabled;
@property (getter=isObjectBeautificationEnabled, nonatomic) bool objectBeautificationEnabled;
@property (getter=isOnboardingEnabled, nonatomic) bool onboardingEnabled;
@property (getter=isOpendoorReplaceOpeningEnabled, nonatomic) bool opendoorReplaceOpeningEnabled;
@property (getter=isOpeningReplaceOpendoorEnabled, nonatomic) bool openingReplaceOpendoorEnabled;
@property (getter=isStandardizationEnabled, nonatomic) bool standardizationEnabled;
@property (getter=isTextCoachingEnabled, nonatomic) bool textCoachingEnabled;
@property (getter=isWindowDoorDetectionEnabled, nonatomic) bool windowDoorDetectionEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isBayWindowRecessedAreaEnabled;
- (bool)isBoundaryRefinementEnabled;
- (bool)isDoorReplaceOpeningEnabled;
- (bool)isDoorWindowBeautificationEnabled;
- (bool)isDriftDetectionEnabled;
- (bool)isLiveResultEnabled;
- (bool)isMarkerCoachingEnabled;
- (bool)isNonUniformHeightEnabled;
- (bool)isObjectBeautificationEnabled;
- (bool)isOnboardingEnabled;
- (bool)isOpendoorReplaceOpeningEnabled;
- (bool)isOpeningReplaceOpendoorEnabled;
- (bool)isStandardizationEnabled;
- (bool)isTextCoachingEnabled;
- (bool)isWindowDoorDetectionEnabled;
- (unsigned long long)maxFramerate;
- (void)setBayWindowRecessedAreaEnabled:(bool)arg1;
- (void)setBoundaryRefinementEnabled:(bool)arg1;
- (void)setDoorReplaceOpeningEnabled:(bool)arg1;
- (void)setDoorWindowBeautificationEnabled:(bool)arg1;
- (void)setDriftDetectionEnabled:(bool)arg1;
- (void)setLiveResultEnabled:(bool)arg1;
- (void)setMarkerCoachingEnabled:(bool)arg1;
- (void)setMaxFramerate:(unsigned long long)arg1;
- (void)setNonUniformHeightEnabled:(bool)arg1;
- (void)setObjectBeautificationEnabled:(bool)arg1;
- (void)setOnboardingEnabled:(bool)arg1;
- (void)setOpendoorReplaceOpeningEnabled:(bool)arg1;
- (void)setOpeningReplaceOpendoorEnabled:(bool)arg1;
- (void)setStandardizationEnabled:(bool)arg1;
- (void)setTextCoachingEnabled:(bool)arg1;
- (void)setWindowDoorDetectionEnabled:(bool)arg1;

@end
