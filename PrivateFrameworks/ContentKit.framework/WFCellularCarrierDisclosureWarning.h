
@interface WFCellularCarrierDisclosureWarning : WFDisclosureWarning {
    NSString * _displayedCarrierName;
}

@property (nonatomic, readonly) NSString *displayedCarrierName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayedCarrierName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayedCarrierName:(id)arg1;
- (id)localizedMessage;

@end
