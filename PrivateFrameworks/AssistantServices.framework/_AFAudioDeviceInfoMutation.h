
@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating> {
    AFAudioDeviceInfo * _base;
    NSUUID * _deviceUID;
    bool  _isRemoteDevice;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasRoute : 1; 
        unsigned int hasIsRemoteDevice : 1; 
        unsigned int hasDeviceUID : 1; 
    }  _mutationFlags;
    NSString * _route;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDeviceUID;
- (bool)getIsRemoteDevice;
- (id)getRoute;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDeviceUID:(id)arg1;
- (void)setIsRemoteDevice:(bool)arg1;
- (void)setRoute:(id)arg1;

@end
