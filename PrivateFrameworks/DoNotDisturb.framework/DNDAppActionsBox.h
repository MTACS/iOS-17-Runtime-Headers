
@interface DNDAppActionsBox : NSObject <NSSecureCoding> {
    NSDictionary * _appActionsForModeIdentifier;
}

@property (nonatomic, copy) NSDictionary *appActionsForModeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appActionsForModeIdentifier;
- (id)appConfigurationActionsForModeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppActionsForModeIdentifier:(id)arg1;

@end
