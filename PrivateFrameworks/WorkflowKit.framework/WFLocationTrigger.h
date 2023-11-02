
@interface WFLocationTrigger : WFTrigger {
    NSDate * _endTime;
    CLCircularRegion * _region;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, copy) CLCircularRegion *region;
@property (nonatomic, retain) NSDate *startTime;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)isAllowedToRunAutomatically;
+ (bool)requiresNotification;
+ (bool)supportsSecureCoding;
+ (id)timestampDateFormatter;

- (void).cxx_destruct;
- (void)configureWithConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (bool)hasValidConfiguration;
- (id)initWithCoder:(id)arg1;
- (bool)isDateWithinTimeRange:(id)arg1;
- (id)region;
- (void)setEndTime:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (bool)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2;

@end
