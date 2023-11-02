
@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding> {
    NSString * _carrierName;
    NSString * _countryCode;
    NSString * _deviceName;
    NSString * _phoneNumber;
    CTUserLabel * _planLabel;
    NSString * _sourceIccid;
    long long  _status;
}

@property (nonatomic, retain) NSString *carrierName;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) CTUserLabel *planLabel;
@property (nonatomic, retain) NSString *sourceIccid;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierName;
- (id)countryCode;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)phoneNumber;
- (id)planLabel;
- (void)setCarrierName:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPlanLabel:(id)arg1;
- (void)setSourceIccid:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)sourceIccid;
- (long long)status;

@end
