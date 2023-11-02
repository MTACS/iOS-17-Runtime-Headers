
@interface CNContactTargetActionWrapper : NSObject {
    SEL  _action;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (SEL)action;
- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)performActionWithSender:(id)arg1;
- (id)target;

@end
