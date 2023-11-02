
@interface WFSSIDDisclosureWarning : WFDisclosureWarning {
    NSString * _displayedNetworkName;
}

@property (nonatomic, readonly) NSString *displayedNetworkName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayedNetworkName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayedNetworkName:(id)arg1;
- (id)localizedMessage;

@end
