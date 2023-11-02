
@interface _AFAudioSessionCoordinationSystemInfoMutation : NSObject <AFAudioSessionCoordinationSystemInfoMutating> {
    AFAudioSessionCoordinationSystemInfo * _base;
    NSUUID * _homeKitMediaSystemIdentifier;
    NSString * _homeKitRoomName;
    bool  _isSupportedAndEnabled;
    NSString * _mediaRemoteGroupIdentifier;
    NSString * _mediaRemoteRouteIdentifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIsSupportedAndEnabled : 1; 
        unsigned int hasHomeKitRoomName : 1; 
        unsigned int hasHomeKitMediaSystemIdentifier : 1; 
        unsigned int hasMediaRemoteGroupIdentifier : 1; 
        unsigned int hasMediaRemoteRouteIdentifier : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getHomeKitMediaSystemIdentifier;
- (id)getHomeKitRoomName;
- (bool)getIsSupportedAndEnabled;
- (id)getMediaRemoteGroupIdentifier;
- (id)getMediaRemoteRouteIdentifier;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setHomeKitMediaSystemIdentifier:(id)arg1;
- (void)setHomeKitRoomName:(id)arg1;
- (void)setIsSupportedAndEnabled:(bool)arg1;
- (void)setMediaRemoteGroupIdentifier:(id)arg1;
- (void)setMediaRemoteRouteIdentifier:(id)arg1;

@end
