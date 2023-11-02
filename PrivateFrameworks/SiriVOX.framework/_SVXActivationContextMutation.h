
@interface _SVXActivationContextMutation : NSObject <SVXActivationContextMutating> {
    SVXActivationContext * _baseModel;
    SVXButtonEvent * _buttonEvent;
    SVXClientInfo * _clientInfo;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSource : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasButtonEvent : 1; 
        unsigned int hasSystemEvent : 1; 
        unsigned int hasClientInfo : 1; 
        unsigned int hasRequestInfo : 1; 
        unsigned int hasUserInfo : 1; 
    }  _mutationFlags;
    AFRequestInfo * _requestInfo;
    long long  _source;
    SVXSystemEvent * _systemEvent;
    unsigned long long  _timestamp;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setButtonEvent:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setRequestInfo:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSystemEvent:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;

@end
