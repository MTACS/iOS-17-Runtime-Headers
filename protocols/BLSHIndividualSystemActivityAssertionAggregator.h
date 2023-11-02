
@protocol BLSHIndividualSystemActivityAssertionAggregator <NSObject>

@required

- (void)acquireIndividualAssertion:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 9: BLSHIndividualSystemActivityAssertion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, <SWSystemActivityAcquisitionDetails> *, void*
- (void)invalidateIndividualAssertion:(BLSHIndividualSystemActivityAssertion *)arg1;
- (bool)isActive;

@end
