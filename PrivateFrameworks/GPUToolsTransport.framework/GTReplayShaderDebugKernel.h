
@interface GTReplayShaderDebugKernel : GTReplayShaderDebugRequest <NSSecureCoding> {
    struct GTPoint3D { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _maxThreadPositionInGrid;
    struct GTPoint3D { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _minThreadPositionInGrid;
}

@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxThreadPositionInGrid;
@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } minThreadPositionInGrid;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxThreadPositionInGrid;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })minThreadPositionInGrid;
- (void)setMaxThreadPositionInGrid:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setMinThreadPositionInGrid:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;

@end
