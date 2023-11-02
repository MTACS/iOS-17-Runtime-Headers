
@interface DNDAppConfigurationTargetContentIdentifierPrefixesBox : NSObject <NSSecureCoding> {
    NSDictionary * _appConfigurationTargetContentIdentifierPrefixesForModeIdentifier;
}

@property (nonatomic, copy) NSDictionary *appConfigurationTargetContentIdentifierPrefixesForModeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appConfigurationTargetContentIdentifierPrefixesForModeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)arg1;

@end
