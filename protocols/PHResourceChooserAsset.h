
@protocol PHResourceChooserAsset <PLAssetID>

@required

- (unsigned short)deferredProcessingNeeded;
- (unsigned long long)effectiveThumbnailIndex;
- (bool)hasAdjustments;
- (NSData *)imageRequestHints;
- (bool)isLocalVideoKeyFrameValid;
- (bool)isRAWPlusJPEG;
- (bool)isWalrusEnabled;
- (NSManagedObjectContext *)managedObjectContextForFetchingResources;
- (long long)mediaType;
- (NSManagedObjectID *)objectID;
- (unsigned long long)originalResourceChoice;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
