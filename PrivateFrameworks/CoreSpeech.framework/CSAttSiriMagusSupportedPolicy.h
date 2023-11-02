
@interface CSAttSiriMagusSupportedPolicy : NSObject <CSAttSiriMitigationAssetHandlerDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSPhoneCallStateMonitorDelegate> {
    bool  _isAssetMagusSupported;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isAssetMagusSupported;
@property (readonly) Class superclass;

+ (bool)_isInputOriginSupportedByContinuousConversation:(id)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg3;
- (void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;
- (bool)_isMagusSupportedWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 isInSplitterMode:(bool)arg3 isInActiveCall:(bool)arg4 isSupportedRequestType:(bool)arg5 audioSessionId:(unsigned int)arg6;
- (void)_updateWithAsset:(id)arg1;
- (bool)getIsAssetMagusSupported;
- (bool)getIsMagusSupported;
- (bool)isAssetMagusSupported;
- (bool)isMagusSupportedWithAudioRecordContext:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3 audioSessionId:(unsigned int)arg4;
- (bool)isMagusSupportedWithInputOrigin:(id)arg1 recordRoute:(id)arg2 playbackRoute:(id)arg3 isInSplitterMode:(bool)arg4 isInActiveCall:(bool)arg5;
- (void)mitigationAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;
- (void)setIsAssetMagusSupported:(bool)arg1;
- (void)start;

@end
