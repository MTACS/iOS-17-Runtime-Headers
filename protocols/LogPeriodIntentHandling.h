
@protocol LogPeriodIntentHandling <NSObject>

@required

- (void)handleLogPeriod:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LogPeriodIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LogPeriodIntentResponse *, void*
- (void)handleLogPeriod:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LogPeriodIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LogPeriodIntentResponse *, void*

@optional

- (void)confirmLogPeriod:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LogPeriodIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LogPeriodIntentResponse *, void*
- (void)confirmLogPeriod:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LogPeriodIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LogPeriodIntentResponse *, void*

@end
