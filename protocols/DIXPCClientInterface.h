
@protocol DIXPCClientInterface <DIDeviceListDelegate, DIDeviceStatusDelegate, DISessionStatusDelegate, DIAudioPowerDelegate, DIAudioStatusDelegate>

@required

- (void)fetchClientContextWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DIClientContext *, NSError *, void*

@end
