
@interface BKUILegacyOperationsHandler : BKUIFaceIDEnrollOperationsHandler

+ (id)handlersForEnrollmentConfiguration:(unsigned long long)arg1 inBuddy:(bool)arg2 delegate:(id)arg3 credential:(id)arg4 externalizedAuthContext:(id)arg5;

- (void)advanceEnrollmentState;
- (void)enrollOperation:(id)arg1 finishedWithEnrollResult:(id)arg2;
- (void)startEnroll;

@end
