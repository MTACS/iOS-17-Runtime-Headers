
@interface ASASliderControl : ASAControl

@property (nonatomic, readonly) struct _ASASliderRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic) unsigned int value;

- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (struct _ASASliderRange { unsigned int x1; unsigned int x2; })range;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;

@end
