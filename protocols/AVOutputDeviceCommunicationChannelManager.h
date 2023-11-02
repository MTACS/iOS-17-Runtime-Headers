
@protocol AVOutputDeviceCommunicationChannelManager <NSObject>

@required

- (void)openCommunicationChannelWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputDeviceCommunicationChannel *, NSError *, NSString *, void*
- (AVOutputDevice *)parentOutputDevice;
- (void)setParentOutputDevice:(AVOutputDevice *)arg1;

@end
