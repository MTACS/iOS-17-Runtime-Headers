
@interface HKClinicalAccountEvent : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _accountIdentifier;
    NSString * _caller;
    long long  _credentialStateAfter;
    long long  _credentialStateBefore;
    NSString * _eventDescription;
    NSDate * _timestamp;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSUUID *accountIdentifier;
@property (nonatomic, readonly, copy) NSString *caller;
@property (nonatomic, readonly) long long credentialStateAfter;
@property (nonatomic, readonly, copy) NSString *credentialStateAfterDescription;
@property (nonatomic, readonly) long long credentialStateBefore;
@property (nonatomic, readonly, copy) NSString *credentialStateBeforeDescription;
@property (nonatomic, readonly, copy) NSString *eventDescription;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *typeDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)caller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)credentialStateAfter;
- (id)credentialStateAfterDescription;
- (long long)credentialStateBefore;
- (id)credentialStateBeforeDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDescription;
- (id)eventMarkedAsFailedWithError:(id)arg1;
- (id)eventWithAppendedEventDescription:(id)arg1;
- (id)eventWithAppendedRefreshToken:(id)arg1 description:(id)arg2;
- (id)eventWithUpdatedCredentialStateAfter:(long long)arg1;
- (id)eventWithUpdatedCredentialStateBefore:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 type:(long long)arg2 caller:(id)arg3 timestamp:(id)arg4 eventDescription:(id)arg5;
- (id)initWithAccountIdentifier:(id)arg1 type:(long long)arg2 caller:(id)arg3 timestamp:(id)arg4 eventDescription:(id)arg5 credentialStateBefore:(long long)arg6 credentialStateAfter:(long long)arg7;
- (id)initWithAccountIdentifier:(id)arg1 type:(long long)arg2 caller:(id)arg3 timestamp:(id)arg4 eventDescription:(id)arg5 incomingToken:(id)arg6 currentToken:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClinicalAccountEvent:(id)arg1;
- (id)timestamp;
- (long long)type;
- (id)typeDescription;

@end
