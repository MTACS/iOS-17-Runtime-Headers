
@interface CHSMutableWidgetRenderScheme : CHSWidgetRenderScheme

@property (nonatomic) unsigned long long backgroundViewPolicy;
@property (nonatomic) unsigned long long renderingMode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundViewPolicy:(unsigned long long)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;
- (void)setRenderingModes:(unsigned long long)arg1;

@end
