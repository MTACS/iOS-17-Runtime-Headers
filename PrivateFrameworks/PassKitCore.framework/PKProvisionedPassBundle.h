
@interface PKProvisionedPassBundle : NSObject {
    bool  _ampEnrollmentAvailable;
    bool  _expressModeSetupOptional;
    NSArray * _moreInfoItems;
    NSOrderedSet * _provisionedPasses;
    PKPaymentProvisioningResponse * _provisioningResponse;
}

@property (nonatomic) bool ampEnrollmentAvailable;
@property (nonatomic) bool expressModeSetupOptional;
@property (nonatomic, retain) NSArray *moreInfoItems;
@property (nonatomic, retain) NSOrderedSet *provisionedPasses;
@property (nonatomic, retain) PKPaymentProvisioningResponse *provisioningResponse;

- (void).cxx_destruct;
- (id)_init;
- (bool)ampEnrollmentAvailable;
- (bool)expressModeSetupOptional;
- (id)init;
- (id)moreInfoItems;
- (id)provisionedPasses;
- (id)provisioningResponse;
- (void)setAmpEnrollmentAvailable:(bool)arg1;
- (void)setExpressModeSetupOptional:(bool)arg1;
- (void)setMoreInfoItems:(id)arg1;
- (void)setProvisionedPasses:(id)arg1;
- (void)setProvisioningResponse:(id)arg1;

@end
