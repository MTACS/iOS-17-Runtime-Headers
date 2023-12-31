
@protocol TSKImportExportDelegate <NSObject>

@required

- (void)addWarning:(TSKWarning *)arg1;
- (void)removeWarning:(TSKWarning *)arg1;
- (NSArray *)warnings;

@optional

- (void)addIncompatibleMovieInfo:(TSDMovieInfo *)arg1 withCompatibilityLevel:(long long)arg2;
- (bool)importingDesignDemoDoc;
- (bool)isBrowsingVersions;
- (void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(void *)arg1 isPrecise:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
