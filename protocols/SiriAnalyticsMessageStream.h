
@protocol SiriAnalyticsMessageStream <NSObject>

@required

- (void)barrierWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)emitMessage:(SISchemaTopLevelUnionType *)arg1;
- (void)emitMessage:(SISchemaTopLevelUnionType *)arg1 timestamp:(unsigned long long)arg2;
- (void)enqueueLargeMessageObjectFromPath:(void *)arg1 assetIdentifier:(void *)arg2 messageMetadata:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSUUID *, SISchemaInstrumentationMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resolvePartialMessage:(SISchemaTopLevelUnionType *)arg1;
- (void)resolvePartialMessage:(SISchemaTopLevelUnionType *)arg1 timestamp:(unsigned long long)arg2;

@end
