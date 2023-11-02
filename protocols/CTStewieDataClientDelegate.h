
@protocol CTStewieDataClientDelegate <NSObject>

@required

- (void)connectedServicesChanged:(long long)arg1;
- (void)messageReceived:(void *)arg1 withMetadata:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: <CTStewieMessageIncoming> *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stateChanged:(CTStewieState *)arg1;

@end
