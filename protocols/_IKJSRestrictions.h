
@protocol _IKJSRestrictions <IKJSRestrictions, JSExport>

@required

- (bool)allowArtistActivity;
- (bool)allowsITunes;
- (bool)allowsShowingUndownloadedMovies;
- (bool)allowsShowingUndownloadedTVShows;
- (bool)appAnalyticsAllowed;
- (bool)appInstallationAllowed;
- (long long)maxAppRank;
- (NSString *)maxAppRating;

@end
