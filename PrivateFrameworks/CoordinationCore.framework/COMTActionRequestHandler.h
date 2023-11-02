
@interface COMTActionRequestHandler : NSObject {
    NSSet * _actions;
    <COMTActionRequestHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _targetType;
}

@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly) <COMTActionRequestHandlerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) NSString *targetType;

- (void).cxx_destruct;
- (id)actions;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)initWithType:(id)arg1 actions:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;
- (id)targetType;

@end
