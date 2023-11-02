
@protocol SiriAnalyticsXPCService <NSObject>

@required

- (oneway void)createTag:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SiriAnalyticsTagShim *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)fetchKillSwitchEnabledWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)fetchLogicalClocksWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, NSError *, void*
- (oneway void)fetchSensitiveConditionSpansWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (oneway void)fetchStateForPluginWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (oneway void)fetchTags:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (oneway void)publishLargeMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SiriAnalyticsXPCLargeMessageEnvelope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)publishMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)publishUnorderedMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)resetLogicalClockWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSUUID *, NSError *, void*
- (oneway void)resolveMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)saveState:(void *)arg1 forPluginWithCompletion:(void *)arg2; // needs 2 arg types, found 6: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)sensitiveCondition:(void *)arg1 endedAt:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)sensitiveCondition:(void *)arg1 startedAt:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setKillSwitchEnabled:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)vendSandboxExtensionWithResource:(void *)arg1 readonly:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
