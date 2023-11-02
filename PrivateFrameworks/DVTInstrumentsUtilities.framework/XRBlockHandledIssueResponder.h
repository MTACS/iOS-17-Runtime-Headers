
@interface XRBlockHandledIssueResponder : NSObject <XRIssueResponder> {
    id /* block */  _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleIssue:(id)arg1 type:(short)arg2 from:(id)arg3;
- (id)initWithHandler:(id /* block */)arg1;

@end
