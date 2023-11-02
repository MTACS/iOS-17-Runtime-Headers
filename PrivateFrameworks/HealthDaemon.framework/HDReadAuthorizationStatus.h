
@interface HDReadAuthorizationStatus : NSObject {
    _HKAuthorizationRecord * _authorizationRecord;
    NSNumber * _deletedObjectBaselineAnchor;
    NSNumber * _objectLimitAnchor;
    NSString * _restrictedBundleIdentifier;
    NSSet * _restrictedSourceEntities;
}

@property (nonatomic, readonly) long long authorizationMode;
@property (nonatomic, readonly, copy) HDSQLitePredicate *authorizationPredicate;
@property (nonatomic, readonly, copy) _HKAuthorizationRecord *authorizationRecord;
@property (nonatomic, readonly) long long authorizationRequest;
@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) bool canRead;
@property (nonatomic, readonly) bool canWrite;
@property (nonatomic, readonly, copy) NSNumber *deletedObjectBaselineAnchor;
@property (nonatomic, readonly) bool isAuthorizationDetermined;
@property (nonatomic, readonly, copy) NSNumber *objectLimitAnchor;
@property (nonatomic, readonly, copy) NSDate *objectLimitModifiedDate;
@property (nonatomic, readonly, copy) NSString *restrictedBundleIdentifier;
@property (nonatomic, readonly, copy) NSSet *restrictedSourceEntities;

+ (id)notDerminedReadAuthorizationStatus;
+ (id)unrestrictedReadAuthorizationStatus;

- (void).cxx_destruct;
- (long long)authorizationMode;
- (id)authorizationPredicate;
- (id)authorizationRecord;
- (long long)authorizationRequest;
- (long long)authorizationStatus;
- (bool)canRead;
- (bool)canWrite;
- (id)deletedObjectBaselineAnchor;
- (id)description;
- (void)disableReading;
- (void)disableSharing;
- (unsigned long long)hash;
- (id)initWithReadAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 restrictedBundleIdentifier:(id)arg4 restrictedSourceEntities:(id)arg5 deletedObjectBaselineAnchor:(id)arg6 objectLimitAnchor:(id)arg7 objectLimitModifiedDate:(id)arg8;
- (bool)isAuthorizationDetermined;
- (bool)isEqual:(id)arg1;
- (id)objectLimitAnchor;
- (id)objectLimitModifiedDate;
- (id)restrictedBundleIdentifier;
- (id)restrictedSourceEntities;

@end
