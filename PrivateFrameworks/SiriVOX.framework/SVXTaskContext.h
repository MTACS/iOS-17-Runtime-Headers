
@interface SVXTaskContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _aceId;
    SVXActivationContext * _activationContext;
    SVXDeactivationContext * _deactivationContext;
    NSString * _dialogIdentifier;
    NSString * _dialogPhase;
    NSError * _error;
    bool  _isUUFR;
    SAUIListenAfterSpeakingBehavior * _listenAfterSpeakingBehavior;
    bool  _listensAfterSpeaking;
    long long  _origin;
    NSString * _refId;
    NSUUID * _requestUUID;
    NSUUID * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly, copy) NSString *aceId;
@property (nonatomic, readonly, copy) SVXActivationContext *activationContext;
@property (nonatomic, readonly, copy) SVXDeactivationContext *deactivationContext;
@property (nonatomic, readonly, copy) NSString *dialogIdentifier;
@property (nonatomic, readonly, copy) NSString *dialogPhase;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) bool isUUFR;
@property (nonatomic, readonly, copy) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (nonatomic, readonly) bool listensAfterSpeaking;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly, copy) NSString *refId;
@property (nonatomic, readonly, copy) NSUUID *requestUUID;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)aceId;
- (id)activationContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deactivationContext;
- (id)description;
- (id)dialogIdentifier;
- (id)dialogPhase;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrigin:(long long)arg1 timestamp:(unsigned long long)arg2 sessionUUID:(id)arg3 requestUUID:(id)arg4 aceId:(id)arg5 refId:(id)arg6 dialogIdentifier:(id)arg7 dialogPhase:(id)arg8 isUUFR:(bool)arg9 listensAfterSpeaking:(bool)arg10 listenAfterSpeakingBehavior:(id)arg11 activationContext:(id)arg12 deactivationContext:(id)arg13 error:(id)arg14;
- (bool)isEqual:(id)arg1;
- (bool)isUUFR;
- (id)listenAfterSpeakingBehavior;
- (bool)listensAfterSpeaking;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)origin;
- (id)refId;
- (id)requestUUID;
- (id)sessionUUID;
- (unsigned long long)timestamp;

@end
