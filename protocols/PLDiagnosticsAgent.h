
@protocol PLDiagnosticsAgent <NSObject>

@required

- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)captureDescriptionOfStatisticsWithResultHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)captureDescriptionOfUIState:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)dumpState:(void *)arg1 toDirectoryURL:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 8: long long, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setContentPrivacyState:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)startTungstenRecordingToDirectoryURL:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)stopTungstenRecordingWithResultHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)timelineForAlbum:(void *)arg1 widgetSize:(void *)arg2 jsonFormat:(void *)arg3 resultHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)timelineForWidgetSize:(void *)arg1 jsonFormat:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@optional

- (PLAssetsdClient *)assetsdClient;
- (void)setSystemAuthenticationType:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
