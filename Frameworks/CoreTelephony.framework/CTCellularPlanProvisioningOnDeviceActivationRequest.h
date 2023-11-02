
@interface CTCellularPlanProvisioningOnDeviceActivationRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _eid;
    NSString * _flowType;
    NSString * _gid1;
    NSString * _gid2;
    NSString * _iccid;
    bool  _isESim;
    NSString * _mcc;
    NSString * _mnc;
    NSString * _phoneNumber;
    NSString * _smdpAddress;
    NSString * _sourceIccid;
    NSString * _unusableIccid;
    bool  _useDS;
}

@property (nonatomic, retain) NSString *eid;
@property (nonatomic, retain) NSString *flowType;
@property (nonatomic, retain) NSString *gid1;
@property (nonatomic, retain) NSString *gid2;
@property (nonatomic, retain) NSString *iccid;
@property (nonatomic) bool isESim;
@property (nonatomic, retain) NSString *mcc;
@property (nonatomic, retain) NSString *mnc;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *smdpAddress;
@property (nonatomic, retain) NSString *sourceIccid;
@property (nonatomic, retain) NSString *unusableIccid;
@property (nonatomic) bool useDS;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eid;
- (void)encodeWithCoder:(id)arg1;
- (id)flowType;
- (id)gid1;
- (id)gid2;
- (id)iccid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetails:(id)arg1 installIccid:(id)arg2 sourceIccid:(id)arg3 unusableIccid:(id)arg4 phoneNumber:(id)arg5 mcc:(id)arg6 mnc:(id)arg7 gid1:(id)arg8 gid2:(id)arg9 smdp:(id)arg10 useDS:(bool)arg11 esim:(bool)arg12;
- (id)initWithDetails:(id)arg1 installIccid:(id)arg2 sourceIccid:(id)arg3 unusableIccid:(id)arg4 phoneNumber:(id)arg5 mcc:(id)arg6 mnc:(id)arg7 gid1:(id)arg8 gid2:(id)arg9 smdp:(id)arg10 useDS:(bool)arg11 esim:(bool)arg12 flowType:(id)arg13;
- (id)initWithEid:(id)arg1 installIccid:(id)arg2 sourceIccid:(id)arg3 phoneNumber:(id)arg4 mcc:(id)arg5 mnc:(id)arg6 gid1:(id)arg7 gid2:(id)arg8 smdp:(id)arg9 useDS:(bool)arg10 esim:(bool)arg11;
- (bool)isESim;
- (bool)isEqual:(id)arg1;
- (id)mcc;
- (id)mnc;
- (id)phoneNumber;
- (void)setEid:(id)arg1;
- (void)setFlowType:(id)arg1;
- (void)setGid1:(id)arg1;
- (void)setGid2:(id)arg1;
- (void)setIccid:(id)arg1;
- (void)setIsESim:(bool)arg1;
- (void)setMcc:(id)arg1;
- (void)setMnc:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSmdpAddress:(id)arg1;
- (void)setSourceIccid:(id)arg1;
- (void)setUnusableIccid:(id)arg1;
- (void)setUseDS:(bool)arg1;
- (id)smdpAddress;
- (id)sourceIccid;
- (id)unusableIccid;
- (bool)useDS;

@end
