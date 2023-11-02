
@interface LACUIPackagedViewStateTransition : NSObject {
    NSString * _fromState;
    id /* block */  _handler;
    NSString * _toState;
}

@property (nonatomic, readonly) NSString *fromState;
@property (nonatomic, readonly) NSString *toState;

- (void).cxx_destruct;
- (void)complete:(bool)arg1;
- (void)dealloc;
- (id)fromState;
- (id)initWithFromState:(id)arg1 toState:(id)arg2 completion:(id /* block */)arg3;
- (id)toState;

@end
