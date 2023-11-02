
@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry {
    long long  _capacity;
    NSString * _detailString;
    bool  _prominentlyShowsDetailString;
    bool  _saverModeActive;
    long long  _state;
}

@property (nonatomic) long long capacity;
@property (nonatomic, copy) NSString *detailString;
@property (nonatomic) bool prominentlyShowsDetailString;
@property (nonatomic) bool saverModeActive;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (long long)capacity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)prominentlyShowsDetailString;
- (bool)saverModeActive;
- (void)setCapacity:(long long)arg1;
- (void)setDetailString:(id)arg1;
- (void)setProminentlyShowsDetailString:(bool)arg1;
- (void)setSaverModeActive:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
