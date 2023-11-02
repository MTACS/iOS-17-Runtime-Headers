
@interface CTCellularPlanTransferCrossPlatformRequest : NSObject <NSSecureCoding> {
    NSString * _carrierID;
    NSString * _carrierName;
    NSString * _gid1;
    NSString * _gid2;
    NSString * _mccMnc;
    NSString * _phoneNumber;
}

@property (nonatomic, readonly) NSString *carrierID;
@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) NSString *gid1;
@property (nonatomic, readonly) NSString *gid2;
@property (nonatomic, readonly) NSString *mccMnc;
@property (nonatomic, readonly) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierID;
- (id)carrierName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gid1;
- (id)gid2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 mccMnc:(id)arg3 gid1:(id)arg4 gid2:(id)arg5;
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 mccMnc:(id)arg3 gid1:(id)arg4 gid2:(id)arg5 carrierID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)mccMnc;
- (id)phoneNumber;

@end
