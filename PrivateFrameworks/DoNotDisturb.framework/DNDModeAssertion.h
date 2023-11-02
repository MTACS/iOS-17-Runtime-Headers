
@interface DNDModeAssertion : NSObject <DNDSModernAssertionSourceResolution, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    DNDModeAssertionDetails * _details;
    DNDModeAssertionSource * _source;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) DNDModeAssertionDetails *details;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isClientScheduled;
@property (nonatomic, readonly) bool isInternalScheduled;
@property (nonatomic, readonly) bool isUserInitiated;
@property (nonatomic, readonly, copy) DNDModeAssertionSource *source;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)source;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)predicateForModeAssertionsTakenBeforeDate:(id)arg1;
+ (id)predicateForModeAssertionsWithClientIdentifiers:(id)arg1;
+ (id)predicateForModeAssertionsWithDeviceIdentifier:(id)arg1;
+ (id)predicateForModeAssertionsWithLifetimeClass:(Class)arg1;
+ (id)predicateForModeAssertionsWithModeIdentifiersNotContainedIn:(id)arg1;
+ (id)predicateForModeAssertionsWithUUIDs:(id)arg1;

- (bool)isClientScheduled;
- (bool)isInternalScheduled;
- (bool)isUserInitiated;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;

@end
