
@interface XRStandardIssueResponder : NSObject <XRIssueResponder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultResponder;
+ (void)initialize;
+ (void)setDefaultResponder:(id)arg1;

- (void)handleIssue:(id)arg1 type:(short)arg2 from:(id)arg3;

@end
