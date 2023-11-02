
@interface CTPNRContextInfo : NSObject <IDSCTSIMContext, NSCopying, NSSecureCoding> {
    NSString * _imsi;
    bool  _isReady;
    NSString * _phoneNumber;
    NSString * _phoneNumberOnSIM;
    NSString * _plmn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *imsi;
@property (nonatomic) bool isReady;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *phoneNumberOnSIM;
@property (nonatomic, retain) NSString *phoneNumberOnSIM;
@property (nonatomic, retain) NSString *plmn;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imsi;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPNRContextInfo:(id)arg1;
- (bool)isReady;
- (id)phoneNumber;
- (id)phoneNumberOnSIM;
- (id)plmn;
- (void)setImsi:(id)arg1;
- (void)setIsReady:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumberOnSIM:(id)arg1;
- (void)setPlmn:(id)arg1;

@end
