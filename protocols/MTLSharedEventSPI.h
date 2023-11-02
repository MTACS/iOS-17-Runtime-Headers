
@protocol MTLSharedEventSPI <MTLSharedEvent>

@required

- (IOSurfaceSharedEvent *)IOSurfaceSharedEvent;
- (bool)supportsRollback;
- (bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;

@end
