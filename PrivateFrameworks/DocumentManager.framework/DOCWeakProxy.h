
@interface DOCWeakProxy : NSObject {
    NSObject * _target;
}

@property NSObject *target;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
