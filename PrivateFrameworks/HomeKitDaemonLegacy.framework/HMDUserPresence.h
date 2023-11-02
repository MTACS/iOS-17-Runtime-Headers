
@interface HMDUserPresence : HMFObject <NSSecureCoding> {
    HMDUserPresenceRegion * _presenceRegionStatus;
    NSDate * _updateTimestamp;
    HMDUser * _user;
}

@property (getter=isAtHome, nonatomic, readonly) bool atHome;
@property (getter=isNotAtHome, nonatomic, readonly) bool notAtHome;
@property (nonatomic, retain) HMDUserPresenceRegion *presenceRegionStatus;
@property (nonatomic, readonly) NSDate *updateTimestamp;
@property (nonatomic, readonly) HMDUser *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2;
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2 timeStamp:(id)arg3;
- (bool)isAtHome;
- (bool)isEqual:(id)arg1;
- (bool)isNotAtHome;
- (id)presenceRegionStatus;
- (void)setPresenceRegionStatus:(id)arg1;
- (id)updateTimestamp;
- (id)user;

@end
