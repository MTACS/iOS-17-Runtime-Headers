
@protocol CXCallSourceDelegate <CXCallSourceUpdates>

@required

- (void)callSource:(CXCallSource *)arg1 actionCompleted:(CXAction *)arg2;
- (void)callSourceConnectionEnded:(CXCallSource *)arg1;
- (void)callSourceConnectionStarted:(CXCallSource *)arg1;
- (void)callSourceInvalidated:(CXCallSource *)arg1;

@end
