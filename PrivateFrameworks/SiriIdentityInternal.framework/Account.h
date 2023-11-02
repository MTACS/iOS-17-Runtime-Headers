
@interface Account : INObject

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *homeUserID;
@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, retain) NSNumber *isActive;
@property (nonatomic) bool matchedMultiple;
@property (nonatomic) bool noNameMatched;
@property (nonatomic, copy) NSString *profileId;
@property (nonatomic, copy) NSData *profileImage;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
