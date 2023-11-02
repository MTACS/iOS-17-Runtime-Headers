
@interface _AFAudioSessionCoordinationDeviceInfoMutation : NSObject <AFAudioSessionCoordinationDeviceInfoMutating> {
    AFAudioSessionCoordinationDeviceInfo * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasPeerInfo : 1; 
        unsigned int hasSystemInfo : 1; 
    }  _mutationFlags;
    AFPeerInfo * _peerInfo;
    AFAudioSessionCoordinationSystemInfo * _systemInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getPeerInfo;
- (id)getSystemInfo;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setPeerInfo:(id)arg1;
- (void)setSystemInfo:(id)arg1;

@end
