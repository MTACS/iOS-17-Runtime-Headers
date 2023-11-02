
@interface _PFRequestExecutor : NSObject {
    NSObject<OS_dispatch_group> * _requestGroup;
}

- (void)dealloc;
- (bool)executeRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)executeRequest:(id)arg1 onMirroringDelegate:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)requestFinished;
- (bool)wait;

@end
