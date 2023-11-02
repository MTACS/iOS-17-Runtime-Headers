
@interface WFFocusConfigurationHostContext : NSExtensionContext <WFFocusConfigurationServiceHostProtocol> {
    <WFFocusConfigurationHostContextDelegate> * _focusConfigurationDelegate;
}

@property (nonatomic) <WFFocusConfigurationHostContextDelegate> *focusConfigurationDelegate;

+ (id)_allowedErrorClasses;
+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)configurationUIStateDidUpdate:(id)arg1;
- (void)didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)focusConfigurationDelegate;
- (void)setFocusConfigurationDelegate:(id)arg1;

@end
