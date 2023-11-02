
@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect {
    MTVisualStyling * _visualStyling;
}

@property (getter=_visualStyling, nonatomic, readonly) MTVisualStyling *visualStyling;

- (void).cxx_destruct;
- (id)_visualStyling;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisualStyling:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
