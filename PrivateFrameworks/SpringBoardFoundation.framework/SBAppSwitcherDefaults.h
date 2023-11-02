
@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) unsigned long long bottomEdgeGestureSwipeCount;
@property (nonatomic) bool chamoisEverEnabled;
@property (nonatomic) bool chamoisHideDock;
@property (nonatomic) bool chamoisHideDockExternal;
@property (nonatomic) bool chamoisHideStrips;
@property (nonatomic) bool chamoisHideStripsExternal;
@property (nonatomic) bool chamoisWindowingEnabled;
@property (nonatomic, readonly) NSArray *legacyRecentApplications;
@property (nonatomic, readonly) NSArray *legacyRecentDisplayItemRoles;
@property (nonatomic, readonly) NSArray *legacyRecentDisplayItems;
@property (nonatomic) bool medusaMultitaskingEnabled;
@property (nonatomic, retain) NSArray *recentsPlistRepresentation;
@property (nonatomic) bool shouldShowSlideOverPeekEducation;
@property (nonatomic) bool shouldShowSplitPeekEducation;
@property (nonatomic) bool shouldUpdateExternalDisplayMirroringWhenWindowManagementStyleUpdates;
@property (getter=isSpringBoardKillable, nonatomic, readonly) bool springBoardKillable;
@property (getter=areTrackpadSwitcherGesturesEnabled, nonatomic, readonly) bool trackpadSwitcherGesturesEnabled;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
