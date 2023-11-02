
@interface GraphANESharedEventHandler : NSObject {
    IOSurfaceSharedEvent * _ioSurfaceStartSharedEvent;
    <MTLSharedEvent> * _sharedEvent;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;

@end
