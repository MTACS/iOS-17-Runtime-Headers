
@interface DKNotableUserDataCellularPlan : NSObject {
    NSString * _carrierName;
    bool  _isTransferred;
    NSString * _phoneNumber;
}

@property (nonatomic, retain) NSString *carrierName;
@property (nonatomic) bool isTransferred;
@property (nonatomic, retain) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)carrierName;
- (id)initWithCarrierName:(id)arg1 phoneNumber:(id)arg2 isTransferred:(bool)arg3;
- (bool)isTransferred;
- (id)phoneNumber;
- (void)setCarrierName:(id)arg1;
- (void)setIsTransferred:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
