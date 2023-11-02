
@protocol AFAnalyticsService <NSObject>

@required

- (oneway void)beginEventsGrouping;
- (oneway void)endEventsGrouping;
- (oneway void)logInstrumentationOfType:(NSString *)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(NSUUID *)arg3;
- (oneway void)stageEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)stageUEIEventData:(void *)arg1 timestamp:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
