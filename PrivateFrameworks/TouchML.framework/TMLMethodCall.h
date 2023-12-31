
@interface TMLMethodCall : NSObject {
    NSArray * _argTypes;
    id /* block */  _block;
    bool  _classSelector;
    NSInvocation * _invocation;
    TMLMethodDescriptor * _methodDescriptor;
    SEL  _selector;
}

@property (nonatomic, readonly) bool classMethod;
@property (nonatomic, readonly) NSString *methodName;

- (void).cxx_destruct;
- (id)_callWithArguments:(id)arg1;
- (id)callWithArguments:(id)arg1;
- (bool)classMethod;
- (id)initWithMethodDescriptor:(id)arg1 forClass:(Class)arg2;
- (id)methodName;

@end
