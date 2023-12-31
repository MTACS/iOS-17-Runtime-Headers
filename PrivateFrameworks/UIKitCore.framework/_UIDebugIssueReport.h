
@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {
    NSMutableArray * _mutableIssues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *issues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addIssue:(id)arg1;
- (id)init;
- (id)issues;

@end
