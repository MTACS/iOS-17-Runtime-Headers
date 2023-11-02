
@interface _UIRIPReceiver : NSObject {
    Class  _clazz;
    UIPressesEvent * _event;
    long long  _phase;
    UIPress * _press;
    UIResponder * _responder;
}

@property (nonatomic, readonly) Class clazz;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) UIPress *press;
@property (nonatomic, readonly) UIResponder *responder;

- (void).cxx_destruct;
- (Class)clazz;
- (id)description;
- (unsigned long long)hash;
- (id)initWithResponder:(id)arg1 class:(Class)arg2 press:(id)arg3 inPhase:(long long)arg4 withEvent:(id)arg5;
- (bool)isEqual:(id)arg1;
- (long long)phase;
- (id)press;
- (id)responder;

@end
