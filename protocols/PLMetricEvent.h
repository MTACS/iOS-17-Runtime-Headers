
@protocol PLMetricEvent <NSObject>

@required

- (void)gatherMetricsWithProgressBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (NSString *)identifier;
- (NSDictionary *)payload;

@end
