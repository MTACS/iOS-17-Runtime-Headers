
@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEventSPI>

@property (nonatomic, readonly) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property unsigned long long signaledValue;
@property (readonly) Class superclass;
@property (readonly) bool supportsRollback;

- (id)IOSurfaceSharedEvent;
- (id)label;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)setLabel:(id)arg1;
- (void)setSignaledValue:(unsigned long long)arg1;
- (unsigned long long)signaledValue;
- (bool)supportsRollback;
- (bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;

@end
