
@interface STPresetsConfiguration : NSObject

@property (readonly) NSNumber *allowedAppStoreRating;
@property (readonly) NSNumber *allowedMovieRating;
@property (readonly) NSNumber *allowedTVRating;
@property (readonly) long long allowedWebContent;
@property (getter=isBooksAllowed, readonly) bool booksAllowed;
@property (getter=isDeletingAppsAllowed, readonly) bool deletingAppsAllowed;
@property (getter=isExplicitMediaAllowed, readonly) bool explicitMediaAllowed;
@property (getter=areMusicProfilesAllowed, readonly) bool musicProfilesAllowed;
@property (getter=areMusicVideosAllowed, readonly) bool musicVideosAllowed;
@property (getter=isSiriExplicitAllowed, readonly) bool siriExplicitAllowed;
@property (getter=isSiriWebSearchAllowed, readonly) bool siriWebSearchAllowed;

- (id)allowedAppStoreRating;
- (id)allowedMovieRating;
- (id)allowedTVRating;
- (long long)allowedWebContent;
- (bool)areMusicProfilesAllowed;
- (bool)areMusicVideosAllowed;
- (bool)isBooksAllowed;
- (bool)isDeletingAppsAllowed;
- (bool)isExplicitMediaAllowed;
- (bool)isSiriExplicitAllowed;
- (bool)isSiriWebSearchAllowed;

@end
