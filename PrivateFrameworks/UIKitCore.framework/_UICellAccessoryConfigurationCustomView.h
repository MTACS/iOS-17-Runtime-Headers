
@interface _UICellAccessoryConfigurationCustomView : _UICellAccessoryConfiguration {
    UIView * _customView;
    bool  _maintainsFixedSize;
}

@property (nonatomic, readonly) UIView *customView;
@property (nonatomic) bool maintainsFixedSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (bool)_isSystemType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customView;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)maintainsFixedSize;
- (void)setMaintainsFixedSize:(bool)arg1;

@end
