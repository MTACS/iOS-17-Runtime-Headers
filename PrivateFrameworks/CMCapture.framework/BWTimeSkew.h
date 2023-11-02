
@interface BWTimeSkew : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _adjusted;
    bool  _isBracketFrame;
    bool  _isSISFrame;
    bool  _isStartOfDiscontinuity;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _native;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _original;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } adjusted;
@property (nonatomic, readonly) bool isBracketFrame;
@property (nonatomic, readonly) bool isSISFrame;
@property (nonatomic) bool isStartOfDiscontinuity;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } native;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } original;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjusted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithNativeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 originalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 isBracketFrame:(bool)arg3 isSISFrame:(bool)arg4;
- (bool)isBracketFrame;
- (bool)isSISFrame;
- (bool)isStartOfDiscontinuity;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })native;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })original;
- (void)setAdjusted:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIsStartOfDiscontinuity:(bool)arg1;

@end
