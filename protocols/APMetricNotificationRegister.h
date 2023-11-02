
@protocol APMetricNotificationRegister <NSObject>

@required

- (long long)registerHandlerForPurpose:(void *)arg1 andMetric:(void *)arg2 closure:(void *)arg3; // needs 3 arg types, found 8: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <APMetricProtocol> *, void*
- (long long)registerHandlerForPurpose:(void *)arg1 closure:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <APMetricProtocol> *, void*
- (void)removeHandlerWithIdentifier:(long long)arg1;

@end
