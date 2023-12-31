
@interface VSWeakForwardingTarget : NSObject {
    id  _object;
}

@property (nonatomic) id object;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)object;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setObject:(id)arg1;

@end
