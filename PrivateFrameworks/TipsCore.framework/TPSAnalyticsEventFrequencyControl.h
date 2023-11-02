
@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent {
    NSNumber * _displayCount;
    NSString * _displayType;
    NSString * _experimentCampID;
    NSString * _experimentID;
    NSNumber * _notDisplayedDueToFrequencyControlCount;
}

@property (nonatomic, retain) NSNumber *displayCount;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, retain) NSString *experimentCampID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic, retain) NSNumber *notDisplayedDueToFrequencyControlCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayCount;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experimentCampID;
- (id)experimentID;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayType:(id)arg1 displayCount:(id)arg2 notDisplayedDueToFrequencyControlCount:(id)arg3;
- (id)mutableAnalyticsEventRepresentation;
- (id)notDisplayedDueToFrequencyControlCount;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setExperimentCampID:(id)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setNotDisplayedDueToFrequencyControlCount:(id)arg1;

@end
