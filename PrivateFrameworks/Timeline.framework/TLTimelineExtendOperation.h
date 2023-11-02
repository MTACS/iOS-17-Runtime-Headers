
@interface TLTimelineExtendOperation : TLTimelineOperation {
    NSDate * _afterDate;
    NSError * _extendError;
    unsigned long long  _limit;
    NSArray * _timelineEntries;
    double  _timeout;
}

@property (nonatomic, readonly) NSDate *afterDate;
@property (retain) NSError *extendError;
@property (nonatomic, readonly) unsigned long long limit;
@property (retain) NSArray *timelineEntries;
@property (nonatomic, readonly) double timeout;

+ (unsigned long long)relativePriority;

- (void).cxx_destruct;
- (id)afterDate;
- (id)error;
- (id)extendError;
- (id)initWithIdentifiable:(id)arg1 afterDate:(id)arg2 timeout:(double)arg3 entryLimit:(unsigned long long)arg4;
- (unsigned long long)limit;
- (void)main;
- (void)setExtendError:(id)arg1;
- (void)setTimelineEntries:(id)arg1;
- (id)timelineEntries;
- (double)timeout;

@end
