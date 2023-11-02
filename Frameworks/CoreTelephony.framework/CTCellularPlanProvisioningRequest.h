
@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding> {
    NSString * _EID;
    NSString * _ICCID;
    NSString * _OID;
    NSString * _address;
    NSString * _confirmationCode;
    NSString * _matchingID;
}

@property (nonatomic, retain) NSString *EID;
@property (nonatomic, retain) NSString *ICCID;
@property (nonatomic, retain) NSString *OID;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *confirmationCode;
@property (nonatomic, retain) NSString *matchingID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EID;
- (id)ICCID;
- (id)OID;
- (id)address;
- (id)confirmationCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchingID;
- (void)setAddress:(id)arg1;
- (void)setConfirmationCode:(id)arg1;
- (void)setEID:(id)arg1;
- (void)setICCID:(id)arg1;
- (void)setMatchingID:(id)arg1;
- (void)setOID:(id)arg1;

@end
