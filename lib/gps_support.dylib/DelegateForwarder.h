
@interface DelegateForwarder : NSObject <CLLocationManagerDelegate> {
    id  _forwardingObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
