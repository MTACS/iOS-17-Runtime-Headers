
@interface HMDMatterUARPUploader : UARPUploader

- (bool)accessoryReachable:(id)arg1 error:(id*)arg2;
- (bool)accessoryUnreachable:(id)arg1 error:(id*)arg2;
- (bool)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)cancelAssetStagingForAccessory:(id)arg1 asset:(id)arg2;
- (bool)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)pauseAssetTransfersForAccessory:(id)arg1;
- (bool)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)resumeAssetTransfersForAccessory:(id)arg1;

@end
