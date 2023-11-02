
@protocol AVOutputDeviceCommunicationChannelImpl <NSObject>

@required

- (void)close;
- (AVOutputDeviceCommunicationChannel *)parentChannel;
- (void)sendData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setParentChannel:(AVOutputDeviceCommunicationChannel *)arg1;

@end
