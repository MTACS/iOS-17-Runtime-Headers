
@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating> {
    NSString * _assistantIdentifier;
    AFServiceDeviceContext * _base;
    NSUUID * _identifier;
    NSString * _mediaRouteIdentifier;
    NSString * _mediaSystemIdentifier;
    NSDictionary * _metricsContext;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasAssistantIdentifier : 1; 
        unsigned int hasMediaSystemIdentifier : 1; 
        unsigned int hasMediaRouteIdentifier : 1; 
        unsigned int hasSharedUserID : 1; 
        unsigned int hasRoomName : 1; 
        unsigned int hasProximity : 1; 
        unsigned int hasSerializedContextByKey : 1; 
        unsigned int hasMetricsContext : 1; 
    }  _mutationFlags;
    long long  _proximity;
    NSString * _roomName;
    NSDictionary * _serializedContextByKey;
    NSString * _sharedUserID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAssistantIdentifier;
- (id)getIdentifier;
- (id)getMediaRouteIdentifier;
- (id)getMediaSystemIdentifier;
- (id)getMetricsContext;
- (long long)getProximity;
- (id)getRoomName;
- (id)getSerializedContextByKey;
- (id)getSharedUserID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;
- (void)setMediaSystemIdentifier:(id)arg1;
- (void)setMetricsContext:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSerializedContextByKey:(id)arg1;
- (void)setSharedUserID:(id)arg1;

@end
