
@interface UIGestureRecognizerTarget : NSObject {
    SEL  _action;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (SEL)action;
- (id)description;
- (id)target;

@end
