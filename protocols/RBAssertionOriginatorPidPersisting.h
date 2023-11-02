
@protocol RBAssertionOriginatorPidPersisting <NSObject>

@required

- (void)addPid:(int)arg1;
- (bool)containsPid:(int)arg1;
- (bool)isValid;
- (void)removePid:(int)arg1;
- (void)setValidProcesses:(NSSet *)arg1;

@end
