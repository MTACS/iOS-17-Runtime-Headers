
@interface NUSourceDefinition : NSObject {
    NSDictionary * _sourceOptions;
}

@property (nonatomic, copy) NSDictionary *sourceOptions;

- (void).cxx_destruct;
- (long long)mediaType;
- (void)setSourceOptions:(id)arg1;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)sourceOptions;

@end
