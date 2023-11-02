
@interface MPModelPlaybackPosition : MPModelObject

@property (nonatomic) double bookmarkTime;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic) bool shouldRememberBookmarkTime;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSNumber *stopTime;
@property (nonatomic, copy) NSString *storeUbiquitousIdentifier;
@property (nonatomic) long long userPlayCount;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyPlaybackPositionBookmarkTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionHasBeenPlayed__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionShouldRememberBookmarkTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionStartTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionStopTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionStoreUbiquitousIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionUserPlayCount__MAPPING_MISSING__;
+ (id)__bookmarkTime_KEY;
+ (id)__hasBeenPlayed_KEY;
+ (id)__shouldRememberBookmarkTime_KEY;
+ (id)__startTime_KEY;
+ (id)__stopTime_KEY;
+ (id)__storeUbiquitousIdentifier_KEY;
+ (id)__userPlayCount_KEY;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

@end
