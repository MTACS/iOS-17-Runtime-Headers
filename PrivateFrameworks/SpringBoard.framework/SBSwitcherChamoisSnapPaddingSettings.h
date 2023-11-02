
@interface SBSwitcherChamoisSnapPaddingSettings : PTSettings {
    double  _edgePadding;
    double  _multiAppCenterPadding;
    double  _singleAppCenterPadding;
}

@property (nonatomic) double edgePadding;
@property (nonatomic) double multiAppCenterPadding;
@property (nonatomic) double singleAppCenterPadding;

+ (id)settingsControllerModule;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)edgePadding;
- (unsigned long long)hash;
- (id)initWithDefaultValues;
- (bool)isEqual:(id)arg1;
- (double)multiAppCenterPadding;
- (void)setEdgePadding:(double)arg1;
- (void)setMultiAppCenterPadding:(double)arg1;
- (void)setSingleAppCenterPadding:(double)arg1;
- (double)singleAppCenterPadding;

@end
