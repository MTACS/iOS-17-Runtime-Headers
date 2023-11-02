
@interface NUVideoPropertiesRequest : NURenderRequest

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(id /* block */)arg1;
- (id)submitSynchronous:(out id*)arg1;

@end
