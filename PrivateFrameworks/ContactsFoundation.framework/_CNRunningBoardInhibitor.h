
@interface _CNRunningBoardInhibitor : CNInhibitor {
    RBSAssertion * _assertion;
    NSString * _explanation;
}

@property (nonatomic, retain) RBSAssertion *assertion;
@property (nonatomic, readonly, copy) NSString *explanation;

+ (id)os_log;
+ (id)runningBoardTarget;

- (void).cxx_destruct;
- (id)assertion;
- (id)description;
- (id)explanation;
- (id)initWithExplanation:(id)arg1;
- (void)setAssertion:(id)arg1;
- (void)start;
- (void)stop;

@end
