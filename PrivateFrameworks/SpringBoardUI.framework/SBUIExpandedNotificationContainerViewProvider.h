
@interface SBUIExpandedNotificationContainerViewProvider : NSObject <NCContainerViewProviding> {
    UIView * _containerView;
    bool  _invalidated;
    id /* block */  _invalidationBlock;
    NSString * _reason;
    id  _requester;
}

@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) id requester;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)containerView;
- (void)dealloc;
- (id)description;
- (id)initWithRequester:(id)arg1 containerView:(id)arg2 reason:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (bool)isValid;
- (id)reason;
- (id)requester;

@end
