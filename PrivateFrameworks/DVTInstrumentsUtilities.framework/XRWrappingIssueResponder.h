
@interface XRWrappingIssueResponder : NSObject <XRIssueResponder> {
    <XRIssueResponder> * _nextResponder;
    NSError * _prototype;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleIssue:(id)arg1 type:(short)arg2 from:(id)arg3;
- (id)init;
- (id)initWithNextResponder:(id)arg1 prototype:(id)arg2;

@end
