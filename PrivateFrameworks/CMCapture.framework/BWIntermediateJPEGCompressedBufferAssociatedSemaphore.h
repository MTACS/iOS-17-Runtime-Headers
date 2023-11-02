
@interface BWIntermediateJPEGCompressedBufferAssociatedSemaphore : NSObject {
    NSString * _name;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pts;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void)dealloc;
- (id)initWithSemaphore:(id)arg1 name:(id)arg2 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

@end
