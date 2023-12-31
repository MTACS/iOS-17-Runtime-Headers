
@interface WMStyle : CMStyle

- (void)ResoveInterPropertyDependencies;
- (void)addCharacterProperties:(id)arg1;
- (void)cascadeWithStyle:(id)arg1;
- (id)cssStyleString;
- (id)initWithWDCharacterProperties:(id)arg1;
- (id)initWithWDStyle:(id)arg1;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(bool)arg2;
- (id)initWithWMStyle:(id)arg1;

@end
