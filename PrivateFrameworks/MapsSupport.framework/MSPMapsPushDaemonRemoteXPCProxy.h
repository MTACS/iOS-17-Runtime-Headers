
@interface MSPMapsPushDaemonRemoteXPCProxy : NSObject {
    NSObject * _target;
}

@property (nonatomic) NSObject *target;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObserver:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
