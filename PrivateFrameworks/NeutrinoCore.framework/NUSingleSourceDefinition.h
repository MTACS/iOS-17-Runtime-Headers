
@interface NUSingleSourceDefinition : NUSourceDefinition {
    <NUSourceDerivation> * _sourceDerivation;
}

@property (retain) <NUSourceDerivation> *sourceDerivation;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)init;
- (void)setSourceDerivation:(id)arg1;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)sourceDerivation;

@end
