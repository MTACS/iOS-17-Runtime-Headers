
@protocol SiriAnalyticsService

@required

- (void)barrierWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)createTag:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SiriAnalyticsTagShim *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)emitMessage:(void *)arg1 timestamp:(void *)arg2 messageUUID:(void *)arg3 isolatedStreamUUID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: SISchemaTopLevelUnionType *, unsigned long long, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enqueueLargeMessageObjectFromPath:(void *)arg1 dataUploadEvent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, DUSchemaDUEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resolvePartialMessage:(void *)arg1 timestamp:(void *)arg2 messageUUID:(void *)arg3 isolatedStreamUUID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: SISchemaTopLevelUnionType *, unsigned long long, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sensitiveCondition:(void *)arg1 endedAt:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sensitiveCondition:(void *)arg1 startedAt:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
