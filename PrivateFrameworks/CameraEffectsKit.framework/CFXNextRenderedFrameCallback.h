
@interface CFXNextRenderedFrameCallback : NSObject {
    id /* block */  _block;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sendAfterRenderTime;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } sendAfterRenderTime;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1 sendAfterRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sendAfterRenderTime;

@end
