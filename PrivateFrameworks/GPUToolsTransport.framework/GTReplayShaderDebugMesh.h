
@interface GTReplayShaderDebugMesh : GTReplayShaderDebugRequest <NSSecureCoding> {
    unsigned int  _amplificationID;
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
    struct GTPoint3D { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _objectThreadgroupPositionInGrid;
}

@property (nonatomic) unsigned int amplificationID;
@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxThreadPositionInGrid;
@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } minThreadPositionInGrid;
@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } objectThreadgroupPositionInGrid;

+ (bool)supportsSecureCoding;

- (unsigned int)amplificationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxThreadPositionInGrid;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })minThreadPositionInGrid;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })objectThreadgroupPositionInGrid;
- (void)setAmplificationID:(unsigned int)arg1;
- (void)setMaxThreadPositionInGrid:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setMinThreadPositionInGrid:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setObjectThreadgroupPositionInGrid:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;

@end
