
@interface GTReplayFetchTexture : GTReplayRequest <NSSecureCoding> {
    unsigned int  _depth;
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    unsigned int  _level;
    unsigned int  _plane;
    struct GTRegion { 
        struct GTPoint3D { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct GTSize { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  _region;
    bool  _resolveMultisampleTexture;
    struct GTSize { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _size;
    unsigned int  _slice;
    unsigned long long  _streamRef;
}

@property (nonatomic) unsigned int depth;
@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic) unsigned int level;
@property (nonatomic) unsigned int plane;
@property (nonatomic) struct GTRegion { struct GTPoint3D { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct GTSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; } region;
@property (nonatomic) bool resolveMultisampleTexture;
@property (nonatomic) struct GTSize { unsigned long long x1; unsigned long long x2; unsigned long long x3; } size;
@property (nonatomic) unsigned int slice;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (unsigned int)depth;
- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)level;
- (unsigned int)plane;
- (struct GTRegion { struct GTPoint3D { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct GTSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })region;
- (bool)resolveMultisampleTexture;
- (void)setDepth:(unsigned int)arg1;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setPlane:(unsigned int)arg1;
- (void)setRegion:(struct GTRegion { struct GTPoint3D { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct GTSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setResolveMultisampleTexture:(bool)arg1;
- (void)setSize:(struct GTSize { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSlice:(unsigned int)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (struct GTSize { unsigned long long x1; unsigned long long x2; unsigned long long x3; })size;
- (unsigned int)slice;
- (unsigned long long)streamRef;

@end
