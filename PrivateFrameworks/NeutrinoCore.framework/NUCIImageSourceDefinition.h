
@interface NUCIImageSourceDefinition : NUSingleSourceDefinition {
    CIImage * _image;
    long long  _orientation;
}

@property (readonly) CIImage *image;
@property (readonly) long long orientation;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)image;
- (id)init;
- (id)initWithCIImage:(id)arg1 orientation:(long long)arg2;
- (long long)mediaType;
- (long long)orientation;

@end
