
@interface _SVXTaskContextMutation : NSObject <SVXTaskContextMutating> {
    NSString * _aceId;
    SVXActivationContext * _activationContext;
    SVXTaskContext * _baseModel;
    SVXDeactivationContext * _deactivationContext;
    NSString * _dialogIdentifier;
    NSString * _dialogPhase;
    NSError * _error;
    bool  _isUUFR;
    SAUIListenAfterSpeakingBehavior * _listenAfterSpeakingBehavior;
    bool  _listensAfterSpeaking;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasOrigin : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasSessionUUID : 1; 
        unsigned int hasRequestUUID : 1; 
        unsigned int hasAceId : 1; 
        unsigned int hasRefId : 1; 
        unsigned int hasDialogIdentifier : 1; 
        unsigned int hasDialogPhase : 1; 
        unsigned int hasIsUUFR : 1; 
        unsigned int hasListensAfterSpeaking : 1; 
        unsigned int hasListenAfterSpeakingBehavior : 1; 
        unsigned int hasActivationContext : 1; 
        unsigned int hasDeactivationContext : 1; 
        unsigned int hasError : 1; 
    }  _mutationFlags;
    long long  _origin;
    NSString * _refId;
    NSUUID * _requestUUID;
    NSUUID * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAceId:(id)arg1;
- (void)setActivationContext:(id)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsUUFR:(bool)arg1;
- (void)setListenAfterSpeakingBehavior:(id)arg1;
- (void)setListensAfterSpeaking:(bool)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRefId:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;

@end
