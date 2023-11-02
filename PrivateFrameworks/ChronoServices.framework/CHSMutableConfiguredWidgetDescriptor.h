
@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic, copy) CHSWidgetDisplayProperties *displayProperties;
@property (nonatomic, retain) <CHSWidgetRefreshStrategy> *refreshStrategy;
@property (nonatomic) bool showsComplicationLabel;
@property (nonatomic) bool showsWidgetLabel;
@property (getter=isSuggestion, nonatomic) bool suggestion;
@property (nonatomic) unsigned long long supportedColorSchemes;
@property (nonatomic, copy) NSArray *supportedRenderSchemes;
@property (nonatomic) unsigned long long supportedRenderingModes;
@property (nonatomic) bool supportsLowLuminance;
@property (nonatomic) bool supportsTinting;
@property (getter=isSystemConfigured, nonatomic) bool systemConfigured;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDisplayProperties:(id)arg1;
- (void)setRefreshStrategy:(id)arg1;
- (void)setShowsComplicationLabel:(bool)arg1;
- (void)setShowsWidgetLabel:(bool)arg1;
- (void)setSuggestion:(bool)arg1;
- (void)setSupportedColorSchemes:(unsigned long long)arg1;
- (void)setSupportedRenderSchemes:(id)arg1;
- (void)setSupportedRenderingModes:(unsigned long long)arg1;
- (void)setSupportsLowLuminance:(bool)arg1;
- (void)setSupportsTinting:(bool)arg1;
- (void)setSystemConfigured:(bool)arg1;
- (bool)showsComplicationLabel;

@end
