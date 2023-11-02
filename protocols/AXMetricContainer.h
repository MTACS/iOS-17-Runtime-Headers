
@protocol AXMetricContainer <NSObject>

@required

- (void)measure:(void *)arg1 execute:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AXMetric *, void*
- (NSError *)measure:(void *)arg1 tryExecute:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSError *, id /* block */, AXMetric *, void*
- (bool)measurementsEnabled;
- (AXBookendMetric *)startMeasure:(NSString *)arg1;

@end
