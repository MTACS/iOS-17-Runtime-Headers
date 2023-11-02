
@interface _PXSimulatedDelayedMediaRequest : _PXSimulatedMediaRequest {
    double  _delay;
    double  _delayFraction;
    bool  _didScheduleFinalCallback;
    NSDictionary * _lastOriginalInfo;
    id  _lastOriginalResult;
    double  _originalProgress;
}

- (void).cxx_destruct;
- (void)_handleDelayFraction:(double)arg1;
- (void)_produceFinalCallback;
- (double)_simulatedProgressForProgress:(double)arg1;
- (void)handleOriginalProgress:(double)arg1 error:(id)arg2 stop:(bool*)arg3 info:(id)arg4;
- (void)handleOriginalResult:(id)arg1 info:(id)arg2;
- (id)initWithWrappedMediaRequest:(id)arg1 delay:(double)arg2;

@end
