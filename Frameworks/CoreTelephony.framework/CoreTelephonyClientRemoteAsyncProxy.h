
@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface> {
    NSObject<CTXPCServiceInterface> * _target;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _userQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCObject:(id)arg1 userQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg2 errorHandler:(id /* block */)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
