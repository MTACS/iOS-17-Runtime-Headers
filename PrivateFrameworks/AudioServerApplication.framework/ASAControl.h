
@interface ASAControl : ASAObject

@property (nonatomic, readonly) unsigned int controlElement;
@property (nonatomic, readonly) unsigned int controlScope;

- (unsigned int)controlElement;
- (unsigned int)controlScope;
- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;

@end
