
@interface MRSharedSettings : NSObject

@property (nonatomic, readonly) bool allowSingleRoomExpandedRows;
@property (nonatomic, readonly) double autoRouteInactiveTimeout;
@property (nonatomic, readonly) bool canHostMultiplayerStream;
@property (nonatomic, readonly) double lockScreenAPLRatio;
@property (nonatomic, readonly) double lockScreenAPLTarget;
@property (getter=isMultiplayerAware, nonatomic, readonly) bool multiplayerAware;
@property (getter=isMultiplayerHost, nonatomic, readonly) bool multiplayerHost;
@property (nonatomic, readonly) double oneTapSuggestionInactiveTimeout;
@property (nonatomic, readonly) double quickControlsInactiveTimeout;
@property (nonatomic, readonly) bool showMembersInsteadOfRooms;
@property (nonatomic, readonly) bool supportGroupSession;
@property (nonatomic, readonly) bool supportGroupSessionHome;
@property (nonatomic, readonly) bool supportLockScreenBackground;
@property (nonatomic, readonly) bool supportNanoStandalone;
@property (nonatomic, readonly) bool supportNowPlayingSessionDataSource;
@property (nonatomic, readonly) bool supportSessionBasedLockScreenPlatter;
@property (nonatomic, readonly) bool supportSessionBasedUI;
@property (nonatomic, readonly) bool supportShowMore;

+ (id)currentSettings;

- (bool)allowSingleRoomExpandedRows;
- (double)autoRouteInactiveTimeout;
- (bool)canHostMultiplayerStream;
- (bool)isMultiplayerAware;
- (bool)isMultiplayerHost;
- (double)lockScreenAPLRatio;
- (double)lockScreenAPLTarget;
- (double)oneTapSuggestionInactiveTimeout;
- (double)quickControlsInactiveTimeout;
- (bool)showMembersInsteadOfRooms;
- (bool)supportGroupSession;
- (bool)supportGroupSessionHome;
- (bool)supportLockScreenBackground;
- (bool)supportNanoStandalone;
- (bool)supportNowPlayingSessionDataSource;
- (bool)supportSessionBasedLockScreenPlatter;
- (bool)supportSessionBasedUI;
- (bool)supportShowMore;

@end
