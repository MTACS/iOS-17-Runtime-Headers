
@protocol _DKHistoricalMonitor <_DKMonitoring>

@required

- (id /* block */)historicalHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (NSDate *)lastUpdate;
- (void)setHistoricalHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setShutdownHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)shutdownHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)update;

@end
