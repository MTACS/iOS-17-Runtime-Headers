
@interface _UIPointerArbiter : NSObject <_UIPointerArbitrating> {
    <_UIPointerArbitrating> * _core;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pointerState;
@property (readonly) Class superclass;

+ (id)sharedArbiter;

- (void).cxx_destruct;
- (void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)beginScrollingWithRegion:(id)arg1;
- (void)endScrollingWithRegion:(id)arg1;
- (void)exitRegion:(id)arg1 removeStyle:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)obtainPointerUpdatePauseAssertion;
- (long long)pointerState;

@end
