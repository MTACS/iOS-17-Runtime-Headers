
@interface MCMDMPowerAssertion : MCPowerAssertion {
    UMUserSwitchBlockingTask * _blockingTask;
    NSDate * _creationDate;
}

@property (nonatomic, retain) UMUserSwitchBlockingTask *blockingTask;
@property (nonatomic, readonly) NSDate *creationDate;

+ (id)_currentAssertions;
+ (id)_dateFormatter;
+ (id)assertionDescriptions;

- (void).cxx_destruct;
- (id)blockingTask;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1;
- (void)setBlockingTask:(id)arg1;

@end
