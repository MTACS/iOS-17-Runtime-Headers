
@protocol BLSHSystemActivityAsserting <BSInvalidatable>

@required

- (void)acquireWithTimeout:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 9: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, <SWSystemActivityAcquisitionDetails> *, void*
- (bool)isActive;

@end
