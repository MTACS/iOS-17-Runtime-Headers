
@interface AXAuditDeviceSetting : NSObject {
    NSNumber * _currentValueNumber;
    bool  _enabled;
    NSString * _identifier;
    unsigned long long  _settingType;
    long long  _sliderTickMarks;
}

@property (nonatomic, retain) NSNumber *currentValueNumber;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long settingType;
@property (nonatomic) long long sliderTickMarks;

+ (id)allKnownIdentifiers;
+ (id)createWithIdentifier:(id)arg1 currentValue:(id)arg2 settingType:(unsigned long long)arg3;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentValueNumber;
- (id)description;
- (bool)enabled;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setCurrentValueNumber:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSettingType:(unsigned long long)arg1;
- (void)setSliderTickMarks:(long long)arg1;
- (unsigned long long)settingType;
- (long long)sliderTickMarks;

@end
