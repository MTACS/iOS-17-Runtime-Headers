
@interface _DPPrioPlusPlusMetadataAlgorithm : NSObject {
    unsigned long long  _dimension;
    struct { unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned int *x5; struct _poly_memory {} *x6; } * _prioMemory;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) struct { unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned int *x5; struct _poly_memory {} *x6; }*prioMemory;

+ (id)initializeWithDimensionality:(unsigned long long)arg1;

- (void)dealloc;
- (unsigned long long)dimension;
- (id)initWithDimensionality:(unsigned long long)arg1;
- (struct { unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned int *x5; struct _poly_memory {} *x6; }*)prioMemory;
- (id)randomize:(id)arg1;

@end
