
@interface HRAtrialFibrillationConfirmationCycleMetric : NSObject {
    NSMutableDictionary * _eventPayload;
}

@property (nonatomic, retain) NSMutableDictionary *eventPayload;
@property (nonatomic, readonly, copy) NSDictionary *payload;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithAgeBin:(unsigned long long)arg1 numberOfPositiveTachograms:(long long)arg2 numberOfNegativeTachograms:(long long)arg3 algorithmVersion:(long long)arg4 biologicalSex:(long long)arg5 userShouldBeAlerted:(bool)arg6 cycleDuration:(double)arg7 additionalMetrics:(id)arg8;
- (id)payload;
- (void)setEventPayload:(id)arg1;

@end
