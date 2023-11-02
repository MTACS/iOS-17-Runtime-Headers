
@interface ATXLocationManagerState : NSObject <NSSecureCoding> {
    ATXLocationOfInterest * _currentLOI;
    NSDate * _lastUpdateDate;
    ATXLocationManagerKnownLOIs * _locationsOfInterest;
    NSArray * _predictedExitTimes;
    NSArray * _predictedNextLOIs;
    ATXLocationOfInterest * _previousLOI;
}

@property (nonatomic, retain) ATXLocationOfInterest *currentLOI;
@property (nonatomic, readonly) CLLocation *gymLOI;
@property (nonatomic, readonly) CLLocation *homeLOI;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, readonly) ATXLocationManagerKnownLOIs *locationsOfInterest;
@property (nonatomic, retain) NSArray *predictedExitTimes;
@property (nonatomic, retain) NSArray *predictedNextLOIs;
@property (nonatomic, retain) ATXLocationOfInterest *previousLOI;
@property (nonatomic, readonly) CLLocation *schoolLOI;
@property (nonatomic, readonly) CLLocation *workLOI;

+ (id)merge:(id)arg1 with:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentLOI;
- (void)encodeWithCoder:(id)arg1;
- (void)expirePreviousLOIBefore:(id)arg1;
- (id)gymLOI;
- (id)homeLOI;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdateDate;
- (id)locationsOfInterest;
- (id)predictedExitTimes;
- (id)predictedNextLOIs;
- (id)previousLOI;
- (id)schoolLOI;
- (void)setCurrentLOI:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setPredictedExitTimes:(id)arg1;
- (void)setPredictedNextLOIs:(id)arg1;
- (void)setPreviousLOI:(id)arg1;
- (id)workLOI;

@end
