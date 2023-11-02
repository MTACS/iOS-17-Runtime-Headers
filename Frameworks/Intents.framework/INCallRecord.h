
@interface INCallRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _callCapability;
    NSNumber * _callDuration;
    long long  _callRecordType;
    INPerson * _caller;
    NSDate * _dateCreated;
    NSString * _identifier;
    NSNumber * _isCallerIdBlocked;
    NSNumber * _numberOfCalls;
    NSArray * _participants;
    long long  _preferredCallProvider;
    NSString * _providerBundleId;
    NSString * _providerId;
    NSNumber * _unseen;
}

@property (nonatomic, readonly) long long callCapability;
@property (nonatomic, readonly, copy) NSNumber *callDuration;
@property (nonatomic, readonly) long long callRecordType;
@property (nonatomic, readonly, copy) INPerson *caller;
@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSNumber *isCallerIdBlocked;
@property (nonatomic, readonly, copy) NSNumber *numberOfCalls;
@property (nonatomic, readonly, copy) NSArray *participants;
@property (nonatomic, readonly) long long preferredCallProvider;
@property (nonatomic, readonly, copy) NSString *providerBundleId;
@property (nonatomic, readonly, copy) NSString *providerId;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *unseen;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (long long)callCapability;
- (id)callDuration;
- (long long)callRecordType;
- (id)caller;
- (id)caller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 callRecordType:(long long)arg3 callCapability:(long long)arg4 callDuration:(id)arg5 unseen:(id)arg6;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 callRecordType:(long long)arg3 callCapability:(long long)arg4 callDuration:(id)arg5 unseen:(id)arg6 numberOfCalls:(id)arg7;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 callRecordType:(long long)arg3 callCapability:(long long)arg4 callDuration:(id)arg5 unseen:(id)arg6 participants:(id)arg7 numberOfCalls:(id)arg8 isCallerIdBlocked:(id)arg9;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 callRecordType:(long long)arg3 callCapability:(long long)arg4 callDuration:(id)arg5 unseen:(id)arg6 preferredCallProvider:(long long)arg7 participants:(id)arg8 numberOfCalls:(id)arg9 providerId:(id)arg10 providerBundleId:(id)arg11 isCallerIdBlocked:(id)arg12;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 numberOfCalls:(id)arg8;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 numberOfCalls:(id)arg8 isCallerIdBlocked:(id)arg9;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 preferredCallProvider:(long long)arg8 numberOfCalls:(id)arg9 providerId:(id)arg10;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 preferredCallProvider:(long long)arg8 numberOfCalls:(id)arg9 providerId:(id)arg10 providerBundleId:(id)arg11 isCallerIdBlocked:(id)arg12;
- (id)isCallerIdBlocked;
- (bool)isEqual:(id)arg1;
- (id)numberOfCalls;
- (id)participants;
- (long long)preferredCallProvider;
- (id)providerBundleId;
- (id)providerId;
- (id)unseen;

@end
