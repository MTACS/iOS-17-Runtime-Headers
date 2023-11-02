
@interface NUCompositionSource : NUSource {
    NUCompositionSourceDefinition * _sourceDefinition;
}

@property (nonatomic, readonly) NUComposition *composition;

- (void).cxx_destruct;
- (id)composition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)sourceDefinition:(out id*)arg1;

@end
