
@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, AXDragSessionDelegate, AXDragSessionDragManager, NSXPCListenerDelegate> {
    NSMutableArray * _activeSessions;
    <AXDragManagerDelegate> * _delegate;
    AXDragSession * _dragSession;
    id /* block */  _dragStartCompletionHandler;
    AXDispatchTimer * _dragStartTimer;
    NSObject<OS_dispatch_queue> * _dragStateQueue;
    NSXPCListener * _endpointListener;
    NSString * _machServiceName;
    int  _pidForDrag;
    AXDragEndpointVendor * _vendor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXDragManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXDragSession *dragSession;
@property (nonatomic, copy) id /* block */ dragStartCompletionHandler;
@property (nonatomic, retain) AXDispatchTimer *dragStartTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDragActive;
@property (nonatomic, readonly) NSString *machServiceName;
@property (nonatomic) int pidForDrag;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldAllowEndpointVendForRequestingConnection:(id)arg1;
- (void)cancelDrag;
- (id)delegate;
- (id)dragSession;
- (void)dragSession:(id)arg1 movedToPoint:(struct CGPoint { double x1; double x2; })arg2 byRequestor:(id)arg3;
- (void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;
- (void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)dragSessionWasTerminated:(id)arg1;
- (id /* block */)dragStartCompletionHandler;
- (id)dragStartTimer;
- (void)drop;
- (id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2;
- (id)initWithMachServiceName:(id)arg1;
- (bool)isDragActive;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machServiceName;
- (void)moveToAndDropAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)pidForDrag;
- (void)sessionWasTerminated:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setDragStartCompletionHandler:(id /* block */)arg1;
- (void)setDragStartTimer:(id)arg1;
- (void)setPidForDrag:(int)arg1;
- (void)waitForDragStartFromPid:(int)arg1 completionHandler:(id /* block */)arg2;

@end
