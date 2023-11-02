
@protocol AWUnitTestSampler

@required

- (<AVFoundationUnitTestStreamerCreating> *)AVFoundationSession;
- (void)getStatsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }, void*
- (void)resetStats;
- (void)setCarPlayConnected:(bool)arg1;
- (void)setCarPlayConnected:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setCarplayStateChangedCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDisplayCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDisplayState:(bool)arg1;
- (void)setDisplayState:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPearlErrorState:(bool)arg1;
- (void)setPearlErrorState:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSampleState:(bool)arg1;
- (void)setSampleState:(bool)arg1 deliverEvent:(bool)arg2;
- (void)setSampleState:(void *)arg1 deliverEvent:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSampleState:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSmartCoverCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setSmartCoverClosed:(bool)arg1;
- (void)setSmartCoverClosed:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
