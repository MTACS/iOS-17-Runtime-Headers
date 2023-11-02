
@protocol APKOutputDeviceProtocol <NSObject>

@required

- (NSString *)deviceID;
- (NSString *)deviceName;
- (void)openCommunicationChannelToDestination:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <APKOutputDeviceCommunicationChannel> *, NSError *, void*
- (bool)supportsCommunicationChannelToDestination:(NSString *)arg1;

@end
