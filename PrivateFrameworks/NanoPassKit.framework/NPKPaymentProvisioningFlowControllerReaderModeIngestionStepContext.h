
@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext : NPKPaymentProvisioningFlowStepContext {
    double  _ingestionProgress;
    unsigned long long  _ingestionState;
    NSURL * _physicalCardImageURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) double ingestionProgress;
@property (nonatomic) unsigned long long ingestionState;
@property (nonatomic, retain) NSURL *physicalCardImageURL;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)ingestionProgress;
- (unsigned long long)ingestionState;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)physicalCardImageURL;
- (void)setIngestionProgress:(double)arg1;
- (void)setIngestionState:(unsigned long long)arg1;
- (void)setPhysicalCardImageURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
