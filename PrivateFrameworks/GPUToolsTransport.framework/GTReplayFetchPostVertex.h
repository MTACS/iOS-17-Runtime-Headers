
@interface GTReplayFetchPostVertex : GTReplayRequest <NSSecureCoding> {
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    struct GTPoint3D { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _objectShaderThreadgroupBeginBounds;
    bool  _objectShaderThreadgroupBoundsPresent;
    struct GTPoint3D { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _objectShaderThreadgroupEndBounds;
}

@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } objectShaderThreadgroupBeginBounds;
@property (nonatomic) bool objectShaderThreadgroupBoundsPresent;
@property (nonatomic) struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; } objectShaderThreadgroupEndBounds;

+ (bool)supportsSecureCoding;

- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })objectShaderThreadgroupBeginBounds;
- (bool)objectShaderThreadgroupBoundsPresent;
- (struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })objectShaderThreadgroupEndBounds;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setObjectShaderThreadgroupBeginBounds:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setObjectShaderThreadgroupBoundsPresent:(bool)arg1;
- (void)setObjectShaderThreadgroupEndBounds:(struct GTPoint3D { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;

@end
