
@interface TSKHideOnTouchOutsideViewGestureRecognizerTarget : NSObject {
    SEL  mAction;
    id  mTarget;
}

@property (nonatomic) SEL action;
@property (nonatomic) id target;

- (SEL)action;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
