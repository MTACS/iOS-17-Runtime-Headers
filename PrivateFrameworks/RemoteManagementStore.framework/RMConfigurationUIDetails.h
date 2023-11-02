
@interface RMConfigurationUIDetails : NSObject <NSSecureCoding> {
    NSString * _descriptionUI;
    NSArray * _detailsUI;
    NSString * _titleUI;
}

@property (nonatomic, readonly, copy) NSString *descriptionUI;
@property (nonatomic, readonly) NSArray *detailsUI;
@property (nonatomic, readonly, copy) NSString *titleUI;

+ (id)configurationUIWithTitle:(id)arg1 description:(id)arg2 details:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionUI;
- (id)detailsUI;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 details:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfigurationUI:(id)arg1;
- (id)titleUI;

@end
