
@interface _AFSiriActivationContextMutation : NSObject <AFSiriActivationContextMutating> {
    AFSiriActivationContext * _base;
    NSString * _deviceID;
    long long  _event;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasSource : 1; 
        unsigned int hasEvent : 1; 
        unsigned int hasOptions : 1; 
        unsigned int hasDeviceID : 1; 
        unsigned int hasUserInfo : 1; 
    }  _mutationFlags;
    unsigned long long  _options;
    long long  _source;
    unsigned long long  _timestamp;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDeviceID;
- (long long)getEvent;
- (unsigned long long)getOptions;
- (long long)getSource;
- (unsigned long long)getTimestamp;
- (id)getUserInfo;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDeviceID:(id)arg1;
- (void)setEvent:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;

@end
