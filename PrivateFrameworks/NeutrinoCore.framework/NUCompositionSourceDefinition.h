
@interface NUCompositionSourceDefinition : NUSourceDefinition {
    NUComposition * _composition;
}

@property (readonly) NUComposition *composition;

- (void).cxx_destruct;
- (id)composition;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;

@end
