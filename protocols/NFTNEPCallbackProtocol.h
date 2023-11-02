
@protocol NFTNEPCallbackProtocol

@required

- (void)staticReaderEngagementDiscovered:(NFNdefMessageInternal *)arg1;
- (void)tnepReaderServicesAborted:(NSError *)arg1;
- (void)tnepReaderServicesDiscovered:(NSArray *)arg1;
- (void)tnepTagDeviceDeselected:(NSError *)arg1;
- (void)tnepTagDeviceNDEFMessageReceived:(NFNdefMessageInternal *)arg1;
- (void)tnepTagDeviceReaderDetected;
- (void)tnepTagDeviceSelected:(void *)arg1 respondHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, void*

@end
