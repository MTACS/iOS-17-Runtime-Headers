
@interface HMDRemovedUser : HMFObject <NSSecureCoding> {
    NSDate * _expirationDate;
    bool  _removalInProgress;
    HMDUser * _user;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *mergeID;
@property (getter=isRemovalInProgress) bool removalInProgress;
@property (nonatomic, readonly) HMDUser *user;

+ (id)removedUserWithUser:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 expiration:(id)arg2;
- (bool)isEqualToUser:(id)arg1;
- (bool)isEqualToUserID:(id)arg1;
- (bool)isExpired;
- (bool)isRemovalInProgress;
- (id)mergeID;
- (void)setRemovalInProgress:(bool)arg1;
- (id)user;

@end
