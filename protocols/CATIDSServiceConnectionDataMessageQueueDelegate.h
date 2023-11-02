
@protocol CATIDSServiceConnectionDataMessageQueueDelegate

@required

- (void)dataMessageQueue:(void *)arg1 needsToSendContents:(void *)arg2 shouldSkipTheLine:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <CATIDSServiceConnectionDataMessageQueue> *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dataMessageQueue:(id <CATIDSServiceConnectionDataMessageQueue>)arg1 wantsToCheckRemote:(unsigned long long)arg2;

@end
