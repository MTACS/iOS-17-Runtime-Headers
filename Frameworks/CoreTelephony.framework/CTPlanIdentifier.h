
@interface CTPlanIdentifier : NSObject <NSSecureCoding> {
    NSString * _carrierName;
    NSString * _countryCode;
    NSString * _gid1;
    NSString * _gid2;
    NSString * _iccid;
    NSString * _label;
    NSString * _mcc;
    NSString * _mnc;
    NSString * _phoneNumber;
}

@property (nonatomic, retain) NSString *carrierName;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *gid1;
@property (nonatomic, retain) NSString *gid2;
@property (nonatomic, retain) NSString *iccid;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *mcc;
@property (nonatomic, retain) NSString *mnc;
@property (nonatomic, retain) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierName;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gid1;
- (id)gid2;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5 mcc:(id)arg6 mnc:(id)arg7 gid1:(id)arg8 gid2:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)mcc;
- (id)mnc;
- (id)phoneNumber;
- (void)setCarrierName:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setGid1:(id)arg1;
- (void)setGid2:(id)arg1;
- (void)setIccid:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMcc:(id)arg1;
- (void)setMnc:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
