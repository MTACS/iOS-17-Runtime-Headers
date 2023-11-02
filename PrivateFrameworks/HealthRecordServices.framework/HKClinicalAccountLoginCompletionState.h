
@interface HKClinicalAccountLoginCompletionState : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalAccount * _account;
    NSNumber * _alternateCredentialPersistentID;
    NSError * _error;
    bool  _wasRelogin;
}

@property (nonatomic, readonly, copy) HKClinicalAccount *account;
@property (nonatomic, copy) NSNumber *alternateCredentialPersistentID;
@property (nonatomic, readonly) bool didSucceed;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) bool wasRelogin;

+ (id)completionStateWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)alternateCredentialPersistentID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithAccount:(id)arg1 alternateCredentialPersistentID:(id)arg2 wasRelogin:(bool)arg3 error:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)setAlternateCredentialPersistentID:(id)arg1;
- (bool)wasRelogin;

@end
