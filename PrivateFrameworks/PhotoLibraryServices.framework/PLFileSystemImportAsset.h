
@interface PLFileSystemImportAsset : NSObject {
    int  _assetKind;
    PLAssetJournalEntryPayload * _assetPayload;
    NSObject<PLAlbumProtocol> * _destinationAlbum;
    NSURL * _lockedResourceTransferMarkerFileURL;
    PLLockedResourceTransferRecovery * _lockedResourceTransferRecovery;
    NSString * _path;
    bool  _pathContainsDCIM;
    NSMutableSet * _urls;
}

@property (nonatomic) int assetKind;
@property (nonatomic, readonly) PLAssetJournalEntryPayload *assetPayload;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic, readonly) bool isInterruptedLockedResourceTransfer;
@property (nonatomic, readonly) NSURL *lockedResourceTransferMarkerFileURL;
@property (nonatomic, retain) PLLockedResourceTransferRecovery *lockedResourceTransferRecovery;
@property (nonatomic, readonly) NSSet *urls;

- (void).cxx_destruct;
- (void)addURL:(id)arg1;
- (void)addURLs:(id)arg1;
- (int)assetKind;
- (id)assetPayload;
- (long long)compare:(id)arg1;
- (id)description;
- (id)destinationAlbum;
- (id)initWithAssetPayload:(id)arg1;
- (id)initWithDestinationAlbum:(id)arg1 assetKind:(int)arg2;
- (bool)isCameraKit;
- (bool)isInterruptedLockedResourceTransfer;
- (id)lockedResourceTransferMarkerFileURL;
- (id)lockedResourceTransferRecovery;
- (void)setAssetKind:(int)arg1;
- (void)setDestinationAlbum:(id)arg1;
- (void)setLockedResourceTransferRecovery:(id)arg1;
- (id)urls;

@end
