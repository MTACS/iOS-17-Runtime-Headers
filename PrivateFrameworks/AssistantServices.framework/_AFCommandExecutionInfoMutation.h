
@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating> {
    AFCommandExecutionInfo * _base;
    AFHomeInfo * _currentHomeInfo;
    NSArray * _deviceRestrictions;
    AFEndpointInfo * _endpointInfo;
    NSString * _executionID;
    AFInstanceInfo * _instanceInfo;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasExecutionID : 1; 
        unsigned int hasRequestID : 1; 
        unsigned int hasTurnId : 1; 
        unsigned int hasOriginPeerInfo : 1; 
        unsigned int hasCurrentHomeInfo : 1; 
        unsigned int hasEndpointInfo : 1; 
        unsigned int hasInstanceInfo : 1; 
        unsigned int hasSpeechInfo : 1; 
        unsigned int hasRequestHandlingContextSnapshot : 1; 
        unsigned int hasDeviceRestrictions : 1; 
        unsigned int hasUserInfo : 1; 
    }  _mutationFlags;
    AFPeerInfo * _originPeerInfo;
    AFRequestHandlingContext * _requestHandlingContextSnapshot;
    NSString * _requestID;
    AFSpeechInfo * _speechInfo;
    NSUUID * _turnId;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getCurrentHomeInfo;
- (id)getDeviceRestrictions;
- (id)getEndpointInfo;
- (id)getExecutionID;
- (id)getInstanceInfo;
- (id)getOriginPeerInfo;
- (id)getRequestHandlingContextSnapshot;
- (id)getRequestID;
- (id)getSpeechInfo;
- (id)getTurnId;
- (id)getUserInfo;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setCurrentHomeInfo:(id)arg1;
- (void)setDeviceRestrictions:(id)arg1;
- (void)setEndpointInfo:(id)arg1;
- (void)setExecutionID:(id)arg1;
- (void)setInstanceInfo:(id)arg1;
- (void)setOriginPeerInfo:(id)arg1;
- (void)setRequestHandlingContextSnapshot:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setSpeechInfo:(id)arg1;
- (void)setTurnId:(id)arg1;
- (void)setUserInfo:(id)arg1;

@end
