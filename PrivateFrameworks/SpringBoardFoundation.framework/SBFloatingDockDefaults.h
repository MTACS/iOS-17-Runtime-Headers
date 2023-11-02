
@interface SBFloatingDockDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool appLibraryEnabled;
@property (nonatomic) bool recentsEnabled;

- (void)_bindAndRegisterDefaults;

@end
