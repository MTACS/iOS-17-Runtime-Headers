
@interface TLTimelineSetupOperation : TLTimelineOperation {
    unsigned long long  _entryLimit;
    NSError * _setupError;
    TLTimeline * _timeline;
    double  _timeout;
}

@property (nonatomic, readonly) unsigned long long entryLimit;
@property (retain) NSError *setupError;
@property (retain) TLTimeline *timeline;
@property (nonatomic, readonly) double timeout;

+ (unsigned long long)relativePriority;

- (void).cxx_destruct;
- (unsigned long long)entryLimit;
- (id)error;
- (id)initWithIdentifiable:(id)arg1;
- (id)initWithIdentifiable:(id)arg1 timeout:(double)arg2 entryLimit:(unsigned long long)arg3;
- (void)main;
- (void)setSetupError:(id)arg1;
- (void)setTimeline:(id)arg1;
- (id)setupError;
- (id)timeline;
- (double)timeout;

@end
