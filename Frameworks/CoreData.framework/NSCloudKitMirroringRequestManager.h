
@interface NSCloudKitMirroringRequestManager : NSObject {
    NSCloudKitMirroringRequest * _activeRequest;
    NSCloudKitMirroringAcceptShareInvitationsRequest * _pendingAcceptShareInvitationRequest;
    NSCloudKitMirroringDelegateResetRequest * _pendingDelegateResetRequest;
    NSCloudKitMirroringExportProgressRequest * _pendingExportProgressRequest;
    NSCloudKitMirroringExportRequest * _pendingExportRequest;
    NSCloudKitMirroringFetchRecordsRequest * _pendingFetchRecordsRequest;
    NSCloudKitMirroringImportRequest * _pendingImportRequest;
    NSCloudKitMirroringInitializeSchemaRequest * _pendingInitializeSchemaRequest;
    NSCloudKitMirroringResetMetadataRequest * _pendingResetMetadataRequest;
    NSCloudKitMirroringResetZoneRequest * _pendingResetRequest;
    NSCloudKitMirroringDelegateSerializationRequest * _pendingSerializationRequest;
    NSCloudKitMirroringDelegateSetupRequest * _pendingSetupRequest;
}

- (void)dealloc;

@end
