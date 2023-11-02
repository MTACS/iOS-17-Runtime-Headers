
@interface RMUIConfigurationViewModels : NSObject <NSSecureCoding> {
    RMUIPasscodeViewModel * _passcodeViewModel;
    NSArray * _pluginSectionViewModels;
    NSArray * _pluginViewModels;
    NSArray * _profileViewModels;
}

@property (nonatomic, readonly) RMUIPasscodeViewModel *passcodeViewModel;
@property (nonatomic, readonly) NSArray *pluginSectionViewModels;
@property (nonatomic, readonly) NSArray *pluginViewModels;
@property (nonatomic, readonly) NSArray *profileViewModels;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasscodeViewModel:(id)arg1 profileViewModels:(id)arg2 pluginSectionViewModels:(id)arg3 pluginViewModels:(id)arg4;
- (id)passcodeViewModel;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)profileViewModels;

@end
