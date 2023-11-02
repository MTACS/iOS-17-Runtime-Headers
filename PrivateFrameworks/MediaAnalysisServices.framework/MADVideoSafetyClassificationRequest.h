
@interface MADVideoSafetyClassificationRequest : MADVideoRequest {
    bool  _appliesPreferredTrackTransform;
    bool  _requiresBlastdoor;
    bool  _requiresScoresAndLabels;
    MADVideoSafetyFrameSampling * _sampling;
    NSNumber * _sensitiveFrameCountThreshold;
}

@property (nonatomic) bool appliesPreferredTrackTransform;
@property (nonatomic) bool requiresBlastdoor;
@property (nonatomic) bool requiresScoresAndLabels;
@property (nonatomic, copy) MADVideoSafetyFrameSampling *sampling;
@property (nonatomic, retain) NSNumber *sensitiveFrameCountThreshold;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appliesPreferredTrackTransform;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)requiresBlastdoor;
- (bool)requiresScoresAndLabels;
- (id)sampling;
- (id)sensitiveFrameCountThreshold;
- (void)setAppliesPreferredTrackTransform:(bool)arg1;
- (void)setRequiresBlastdoor:(bool)arg1;
- (void)setRequiresScoresAndLabels:(bool)arg1;
- (void)setSampling:(id)arg1;
- (void)setSensitiveFrameCountThreshold:(id)arg1;

@end
