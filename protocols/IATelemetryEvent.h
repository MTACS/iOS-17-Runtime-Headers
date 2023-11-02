
@protocol IATelemetryEvent

@required

- (void)dispatchEvent:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)isDispatchable;
- (void)resetMeasures;

@end
