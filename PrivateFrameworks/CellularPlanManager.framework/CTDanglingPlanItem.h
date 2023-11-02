
@interface CTDanglingPlanItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _iccid;
    NSString * _phoneNumber;
    NSString * _simLabelID;
    CTUserLabel * _userLabel;
}

@property (nonatomic, retain) NSString *iccid;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *simLabelID;
@property (nonatomic, retain) CTUserLabel *userLabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3 labelID:(id)arg4;
- (id)phoneNumber;
- (void)setIccid:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSimLabelID:(id)arg1;
- (void)setUserLabel:(id)arg1;
- (id)simLabelID;
- (id)userLabel;

@end
