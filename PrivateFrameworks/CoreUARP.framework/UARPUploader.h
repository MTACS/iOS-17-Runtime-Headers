
@interface UARPUploader : NSObject {
    UARPController * _controller;
    NSObject<OS_os_log> * _xpcLog;
}

@property (readonly) UARPController *controller;

- (void).cxx_destruct;
- (bool)accessoryReachable:(id)arg1 error:(id*)arg2;
- (bool)accessoryUnreachable:(id)arg1 error:(id*)arg2;
- (bool)addAccessory:(id)arg1 error:(id*)arg2;
- (bool)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)cancelAssetStagingForAccessory:(id)arg1 asset:(id)arg2;
- (id)controller;
- (void)firmwareStagingComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3;
- (void)firmwareStagingDataBlockTransferred:(id)arg1 assetID:(id)arg2 offset:(unsigned int)arg3 blockSize:(unsigned int)arg4;
- (void)firmwareStagingProgress:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (bool)genericNotification:(id)arg1 notificationName:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)pauseAssetTransfersForAccessory:(id)arg1;
- (bool)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)removeAccessory:(id)arg1 error:(id*)arg2;
- (bool)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)resumeAssetTransfersForAccessory:(id)arg1;
- (bool)setController:(id)arg1;
- (void)stagedFirmwareApplicationComplete:(id)arg1 withStatus:(unsigned long long)arg2;
- (void)stagedFirmwareRescindComplete:(id)arg1 withStatus:(unsigned long long)arg2;
- (bool)supplementalAssetUpdated:(id)arg1 assetName:(id)arg2 error:(id*)arg3;

@end
