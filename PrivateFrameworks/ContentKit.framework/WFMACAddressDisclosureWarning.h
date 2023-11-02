
@interface WFMACAddressDisclosureWarning : WFDisclosureWarning {
    NSString * _displayedMACAddress;
}

@property (nonatomic, readonly) NSString *displayedMACAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayedMACAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayedMACAddress:(id)arg1;
- (id)localizedMessage;

@end
