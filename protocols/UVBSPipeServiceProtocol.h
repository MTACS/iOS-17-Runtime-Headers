
@protocol UVBSPipeServiceProtocol <NSObject>

@required

- (oneway void)sendEncodedEvent:(UVPropertyList *)arg1;
- (oneway void)sendEncodedEvent:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 8: UVPropertyList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UVPropertyList *, NSError *, void*

@end
