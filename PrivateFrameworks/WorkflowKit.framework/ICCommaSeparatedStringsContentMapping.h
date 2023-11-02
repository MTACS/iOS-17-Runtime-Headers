
@interface ICCommaSeparatedStringsContentMapping : ICContentMapping

- (id)allowedCharacterSet;
- (id)contentItemClasses;
- (id)escapedCharacters;
- (void)getStringRepresentation:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (bool)skipURLEncoding;
- (bool)supportsMultipleItems;

@end
