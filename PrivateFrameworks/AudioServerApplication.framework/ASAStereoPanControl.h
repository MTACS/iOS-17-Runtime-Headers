
@interface ASAStereoPanControl : ASAControl

@property (nonatomic, readonly) unsigned int leftPanChannel;
@property (nonatomic, readonly) unsigned int rightPanChannel;
@property (nonatomic) float value;

- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (unsigned int)getPanChannel:(bool)arg1;
- (unsigned int)leftPanChannel;
- (unsigned int)rightPanChannel;
- (void)setValue:(float)arg1;
- (float)value;

@end
