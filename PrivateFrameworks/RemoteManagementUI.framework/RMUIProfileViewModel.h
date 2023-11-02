
@interface RMUIProfileViewModel : NSObject <NSSecureCoding> {
    RMModelDeclarationBase * _declaration;
    RMUIInteractiveProfileFooterViewModel * _footerViewModel;
    NSString * _interactiveDetailsText;
    bool  _isInteractiveProfile;
    NSString * _profileIdentifier;
    short  _symbol;
    NSString * _title;
    RMUIInteractiveProfileToggleViewModel * _toggleViewModel;
    NSString * _value;
}

@property (retain) RMModelDeclarationBase *declaration;
@property (retain) RMUIInteractiveProfileFooterViewModel *footerViewModel;
@property (retain) NSString *interactiveDetailsText;
@property bool isInteractiveProfile;
@property (retain) NSString *profileIdentifier;
@property short symbol;
@property (retain) NSString *title;
@property (retain) RMUIInteractiveProfileToggleViewModel *toggleViewModel;
@property (retain) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearModel;
- (id)declaration;
- (void)encodeWithCoder:(id)arg1;
- (id)footerViewModel;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interactiveDetailsText;
- (bool)isInteractiveProfile;
- (id)profileIdentifier;
- (void)setDeclaration:(id)arg1;
- (void)setFooterViewModel:(id)arg1;
- (void)setInteractiveDetailsText:(id)arg1;
- (void)setInteractiveProfileActive:(bool)arg1 profileIdentifier:(id)arg2;
- (void)setIsInteractiveProfile:(bool)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setSymbol:(short)arg1;
- (void)setTitle:(id)arg1;
- (void)setToggleViewModel:(id)arg1;
- (void)setValue:(id)arg1;
- (short)symbol;
- (id)title;
- (id)toggleViewModel;
- (id)value;

@end
