
@protocol HMDCameraStreamControlManagerProtocol <NSObject>

@required

- (NSNumber *)aspectRatio;
- (unsigned long long)audioStreamSetting;
- (void)negotiateStream;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)setUpRemoteConnectionWithDevice:(HMDDevice *)arg1;
- (NSNumber *)slotIdentifier;
- (void)startStreamWithRemoteSettings:(NSDictionary *)arg1;
- (void)stopStreamWithError:(NSError *)arg1;
- (HMDCameraStreamMetrics *)streamMetrics;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
