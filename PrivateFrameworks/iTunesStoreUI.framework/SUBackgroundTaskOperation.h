
@interface SUBackgroundTaskOperation : ISOperation {
    ISOperation * _operation;
    NSString * _permissionIdentifier;
    unsigned long long  _taskIdentifier;
}

@property (readonly) ISOperation *operation;
@property (readonly) NSString *permissionIdentifier;

- (void)_cancelBackgroundAssertion;
- (void)_removeBackgroundAssertion;
- (void)_takeBackgroundAssertion;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 identifier:(id)arg2;
- (id)operation;
- (id)permissionIdentifier;
- (void)run;

@end
