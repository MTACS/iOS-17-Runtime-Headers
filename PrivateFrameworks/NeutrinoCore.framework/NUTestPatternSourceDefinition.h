
@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition {
    long long  _orientation;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (readonly) long long orientation;
@property (readonly) struct { long long x1; long long x2; } size;

- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 orientation:(long long)arg2;
- (long long)mediaType;
- (long long)orientation;
- (struct { long long x1; long long x2; })size;

@end
