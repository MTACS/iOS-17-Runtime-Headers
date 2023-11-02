
@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (nonatomic) <CoreDAVCopyTaskDelegate> *delegate;

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)httpMethod;
- (bool)validate:(id*)arg1;

@end
