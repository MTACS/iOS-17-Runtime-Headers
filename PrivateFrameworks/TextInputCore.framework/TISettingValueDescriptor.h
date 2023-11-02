
@interface TISettingValueDescriptor : TIMetricDescriptor {
    NSString * _settingName;
}

@property (retain) NSString *settingName;

+ (id)settingValueDescriptorWithMetricName:(id)arg1 settingName:(id)arg2;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)arg1 settingName:(id)arg2;
- (void)setSettingName:(id)arg1;
- (id)settingName;

@end
