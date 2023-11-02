
@interface PVMatrix44Double : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _SIMDDouble4x4;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDDouble4x4;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDFloat4x4;

+ (bool)isMatrix:(id)arg1 equivalentTo:(id)arg2;
+ (id)matrix;
+ (id)matrixWithPCMatrix44Double:(id)arg1;
+ (id)matrixWithPCMatrix44d:(const void*)arg1;
+ (id)matrixWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)matrixWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (bool)supportsSecureCoding;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDDouble4x4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDFloat4x4;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedDescription;
- (void)getPCMatrix44d:(void*)arg1;
- (struct PVTransformInfo { struct { } x1; })getTransformInfo:(id*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCMatrix44Double:(id)arg1;
- (id)initWithPCMatrix44d:(const void*)arg1;
- (id)initWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)initWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinite;
- (bool)isIdentity;
- (void)makeIdentity;
- (id)pcMatrix44Double;
- (void)setPCMatrix44Double:(id)arg1;
- (void)setPCMatrix44d:(const void*)arg1;
- (void)setSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setValue:(double)arg1 col:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)transpose;
- (double)valueAtCol:(unsigned long long)arg1 row:(unsigned long long)arg2;

@end
