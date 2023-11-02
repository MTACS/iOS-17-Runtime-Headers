
@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent> {
    <PXGTungstenRecordingSession> * _recordingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)localDiagnosticsAgent;

- (void).cxx_destruct;
- (id)__currentTimestamp;
- (void)_captureCurrentAssetResourcesToDirectory:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)_currentAsset;
- (id)_currentAssetDetailedDescription;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetIdentifierUUID;
- (id)_currentAssetMetadata;
- (id)_currentAssetViewModelDescription;
- (id)_currentPrivacyController;
- (id)_descriptionForAllUIState;
- (id)_descriptionOfUIState:(long long)arg1;
- (id)_selectedAssetIdentifiersDescription;
- (id)_selectedAssetUUIDsDescription;
- (id)_selectedAssets;
- (id)_viewControllerHierarchyDescription;
- (id)_viewModelDescription;
- (id)_windowRecursiveDescription;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(id /* block */)arg1;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(id /* block */)arg1;
- (void)captureDescriptionOfStatisticsWithResultHandler:(id /* block */)arg1;
- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(id /* block */)arg2;
- (void)dumpState:(long long)arg1 toDirectoryURL:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)setContentPrivacyState:(long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setSystemAuthenticationType:(long long)arg1 resultHandler:(id /* block */)arg2;
- (void)startTungstenRecordingToDirectoryURL:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)stopTungstenRecordingWithResultHandler:(id /* block */)arg1;
- (void)timelineForAlbum:(id)arg1 widgetSize:(id)arg2 jsonFormat:(bool)arg3 resultHandler:(id /* block */)arg4;
- (void)timelineForWidgetSize:(id)arg1 jsonFormat:(bool)arg2 resultHandler:(id /* block */)arg3;

@end
