
@interface RMUIPluginSectionViewModel : NSObject <NSSecureCoding> {
    NSString * _heading;
    NSArray * _viewModels;
}

@property (retain) NSString *heading;
@property (retain) NSArray *viewModels;

+ (id)newPluginSectionViewModelWithHeading:(id)arg1 viewModels:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)heading;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeading:(id)arg1 viewModels:(id)arg2;
- (void)setHeading:(id)arg1;
- (void)setViewModels:(id)arg1;
- (id)viewModels;

@end
