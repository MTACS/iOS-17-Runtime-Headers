
@interface ICBearContentMapping : ICContentMapping

- (id)contentItemClasses;
- (void)getFileURLQueryString:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getStringRepresentation:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getTextRepresentation:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getTextURLQueryString:(id /* block */)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (bool)skipURLEncoding;

@end
