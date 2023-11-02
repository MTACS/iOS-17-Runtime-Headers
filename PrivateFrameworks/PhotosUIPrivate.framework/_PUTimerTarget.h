
@interface _PUTimerTarget : NSObject {
    SEL  _selector;
    id  _target;
}

@property (nonatomic) SEL selector;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (void)handleTimer:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
