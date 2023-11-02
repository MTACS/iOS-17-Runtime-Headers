
@interface PPDecayedFeedbackCounts : NSObject {
    double  _engagedExplicitly;
    double  _engagedImplicitly;
    NSDate * _latestDate;
    double  _rejectedExplicitly;
    double  _rejectedImplicitly;
}

@property (nonatomic, readonly) double engagedExplicitly;
@property (nonatomic, readonly) double engagedImplicitly;
@property (nonatomic, readonly) NSDate *latestDate;
@property (nonatomic, readonly) double rejectedExplicitly;
@property (nonatomic, readonly) double rejectedImplicitly;

- (void).cxx_destruct;
- (double)engagedExplicitly;
- (double)engagedImplicitly;
- (id)initWithLatestDate:(id)arg1 engagedExplicitly:(double)arg2 engagedImplicitly:(double)arg3 rejectedExplicitly:(double)arg4 rejectedImplicitly:(double)arg5;
- (id)latestDate;
- (double)rejectedExplicitly;
- (double)rejectedImplicitly;
- (id)toDictionary;

@end
