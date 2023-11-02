
@interface SBReverseCountedSemaphore : NSObject {
    NSObject<OS_dispatch_group> * _group;
}

- (void).cxx_destruct;
- (void)decrement;
- (void)increment;
- (id)init;
- (bool)waitWithTimeout:(double)arg1;

@end
