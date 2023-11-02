
@interface CAMDelayTestHarness : CAMPerformanceTestHarness {
    long long  __delay;
}

@property long long _delay;

- (long long)_delay;
- (id)initWithTestName:(id)arg1 secondsDelay:(long long)arg2;
- (void)set_delay:(long long)arg1;
- (void)startTesting;

@end
