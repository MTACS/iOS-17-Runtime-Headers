
@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry {
    bool  _lowDataModeActive;
    long long  _status;
}

@property (nonatomic) bool lowDataModeActive;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)lowDataModeActive;
- (void)setLowDataModeActive:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
