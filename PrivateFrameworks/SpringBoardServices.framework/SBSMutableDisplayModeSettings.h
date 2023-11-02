
@interface SBSMutableDisplayModeSettings : SBSDisplayModeSettings

@property (nonatomic) long long overscanCompensation;
@property (nonatomic) unsigned long long scale;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setScale:(unsigned long long)arg1;

@end
