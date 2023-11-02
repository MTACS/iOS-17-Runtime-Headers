
@interface BWStillImageCaptureDelegateCallbackInfo : NSObject {
    unsigned int  _flag;
    bool  _isPreBracketFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pts;
}

@property (nonatomic, readonly) unsigned int flag;
@property (nonatomic, readonly) bool isPreBracketFrame;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } pts;

- (unsigned int)flag;
- (id)initWithFlag:(unsigned int)arg1;
- (id)initWithFlag:(unsigned int)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 isPreBracketFrame:(bool)arg3;
- (bool)isPreBracketFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pts;

@end
