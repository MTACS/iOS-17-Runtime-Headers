
@interface SBStateDumpDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isRemoteDumpEnabled, nonatomic) bool remoteDumpEnabled;
@property (nonatomic, retain) NSNumber *remoteDumpTimeout;

- (void)_bindAndRegisterDefaults;

@end
