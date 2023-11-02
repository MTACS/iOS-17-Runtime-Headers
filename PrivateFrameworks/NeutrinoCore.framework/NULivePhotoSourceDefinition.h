
@interface NULivePhotoSourceDefinition : NUSourceDefinition {
    NUSourceDefinition * _image;
    NUSourceDefinition * _video;
}

@property (readonly) NUSourceDefinition *image;
@property (readonly) NUSourceDefinition *video;

- (void).cxx_destruct;
- (id)description;
- (id)image;
- (id)init;
- (id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)video;

@end
