
@interface SBSystemActionDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) NSData *configuredActionArchive;

- (void)_bindAndRegisterDefaults;

@end
