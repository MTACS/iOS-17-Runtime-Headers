
@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool didShowIconReorderAlert;
@property (nonatomic, readonly) NSDictionary *legacyIconState;
@property (nonatomic, readonly) NSDictionary *legacyIconState2;
@property (nonatomic, readonly) long long maxIconListCount;
@property (nonatomic, readonly) bool shouldDisableLiveIcons;
@property (nonatomic) bool suppressAppShortcutTruncation;
@property (nonatomic, readonly) bool suppressSetCurrentPage;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
