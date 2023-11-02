
@interface NUMultipleSourceDefinition : NUSourceDefinition {
    NSArray * _sourceDefinitions;
}

@property (readonly) NSArray *sourceDefinitions;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSourceDefinitions:(id)arg1;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)sourceDefinitions;

@end
