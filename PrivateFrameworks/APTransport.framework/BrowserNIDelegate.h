
@interface BrowserNIDelegate : NSObject <NISessionDelegate> {
    struct OpaqueFigCFWeakReferenceHolder { } * _browserWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithBrowser:(struct OpaqueAPBrowser { }*)arg1;
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveNearbyObjects:(id)arg2 withReason:(long long)arg3;
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;

@end
