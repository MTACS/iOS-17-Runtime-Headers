
@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext {
    PKPaymentSetupProduct * _product;
    NSArray * _setupFields;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (nonatomic, retain) NSArray *setupFields;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)product;
- (void)setProduct:(id)arg1;
- (void)setSetupFields:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)setupFields;
- (id)subtitle;
- (id)title;

@end
