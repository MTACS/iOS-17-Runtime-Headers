
@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying> {
    NSUUID * _UUID;
    DNDModeAssertionInvalidationDetails * _details;
    DNDSModeAssertionInvalidationPredicate * _predicate;
    unsigned long long  _reason;
    unsigned long long  _reasonOverride;
    NSDate * _requestDate;
    DNDModeAssertionSource * _source;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) DNDModeAssertionInvalidationDetails *details;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSModeAssertionInvalidationPredicate *predicate;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long reasonOverride;
@property (nonatomic, readonly, copy) NSDate *requestDate;
@property (nonatomic, readonly, copy) DNDModeAssertionSource *source;
@property (readonly) Class superclass;

+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6;
+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 source:(id)arg3 reason:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 predicate:(id)arg2 requestDate:(id)arg3 details:(id)arg4 source:(id)arg5 reason:(unsigned long long)arg6 reasonOverride:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (unsigned long long)reason;
- (unsigned long long)reasonOverride;
- (id)requestDate;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;
- (id)source;

@end
