
@protocol PLPhotoAnalysisServiceProviderProtocol <PLAnalysisServiceLibraryAvailabilityNotificationProtocol>

@required

- (void)executiveServiceAt:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLPhotoAnalysisExecutiveServiceProtocol> *, NSError *, void*
- (void)legacyStorytellingServiceAt:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)momentGraphServiceAt:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLPhotoAnalysisMomentGraphServiceProtocol> *, NSError *, void*
- (void)photoLibraryServiceAt:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLPhotoAnalysisPhotoLibraryServiceProtocol> *, NSError *, void*
- (void)testServiceAt:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLPhotoAnalysisTestServiceProtocol> *, NSError *, void*
- (void)wallpaperServiceAt:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLPhotoAnalysisWallpaperServiceProtocol> *, NSError *, void*

@end
