
@interface NUAuxiliaryPropertiesRequest : NURenderRequest

- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(id /* block */)arg1;
- (id)submitSynchronous:(out id*)arg1;

@end
