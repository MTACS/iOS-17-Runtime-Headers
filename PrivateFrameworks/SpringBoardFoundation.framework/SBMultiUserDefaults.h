
@interface SBMultiUserDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool disablesInternalDebugBlockingTasksUI;
@property (nonatomic, readonly) bool forceLoginWindow;

- (void)_bindAndRegisterDefaults;

@end
