
@interface NUScaledSourceDefinition : NUSingleSourceDefinition {
    struct { 
        long long width; 
        long long height; 
    }  _fullSize;
    NUSingleSourceDefinition * _source;
    struct { 
        long long width; 
        long long height; 
    }  _sourceSize;
}

@property (readonly) struct { long long x1; long long x2; } fullSize;
@property (readonly) NUSingleSourceDefinition *source;
@property (readonly) struct { long long x1; long long x2; } sourceSize;

- (void).cxx_destruct;
- (id)description;
- (struct { long long x1; long long x2; })fullSize;
- (id)initWithSourceDefinition:(id)arg1 sourceSize:(struct { long long x1; long long x2; })arg2 fullSize:(struct { long long x1; long long x2; })arg3;
- (long long)mediaType;
- (struct { long long x1; long long x2; })scale;
- (id)source;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (struct { long long x1; long long x2; })sourceSize;

@end
