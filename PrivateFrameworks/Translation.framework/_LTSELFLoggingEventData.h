
@interface _LTSELFLoggingEventData : NSObject <NSSecureCoding> {
    NSString * _invocationCancelledReason;
    NSError * _invocationEndedError;
    NSUUID * _invocationId;
    NSUUID * _qssSessionId;
    _LTSELFLoggingInvocationOptions * _startInvocationOptions;
    _LTLocalePair * _translationLocalePair;
    NSString * _translationPayload;
    long long  _type;
}

@property (nonatomic, copy) NSString *invocationCancelledReason;
@property (nonatomic, copy) NSError *invocationEndedError;
@property (nonatomic, readonly, copy) NSUUID *invocationId;
@property (nonatomic, copy) NSUUID *qssSessionId;
@property (nonatomic, retain) _LTSELFLoggingInvocationOptions *startInvocationOptions;
@property (nonatomic, copy) _LTLocalePair *translationLocalePair;
@property (nonatomic, copy) NSString *translationPayload;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 invocationId:(id)arg2;
- (id)invocationCancelledReason;
- (id)invocationEndedError;
- (id)invocationId;
- (id)qssSessionId;
- (void)setInvocationCancelledReason:(id)arg1;
- (void)setInvocationEndedError:(id)arg1;
- (void)setQssSessionId:(id)arg1;
- (void)setStartInvocationOptions:(id)arg1;
- (void)setTranslationLocalePair:(id)arg1;
- (void)setTranslationPayload:(id)arg1;
- (id)startInvocationOptions;
- (id)translationLocalePair;
- (id)translationPayload;
- (long long)type;

@end
