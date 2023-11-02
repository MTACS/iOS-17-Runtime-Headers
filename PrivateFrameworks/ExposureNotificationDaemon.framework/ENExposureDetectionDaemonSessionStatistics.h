
@interface ENExposureDetectionDaemonSessionStatistics : NSObject <NSCopying> {
    unsigned long long  _droppedCachedKeyUpdatesCount;
    unsigned long long  _droppedKeyCount;
    unsigned long long  _fileInvalidKeyCount;
    unsigned long long  _fileKeyCount;
    unsigned long long  _invalidFileSignatureCount;
    unsigned long long  _matchedKeyCount;
    unsigned long long  _newCachedKeyCount;
    unsigned long long  _processedFileCount;
    unsigned long long  _revokedKeyCount;
    unsigned long long  _updatedCachedKeyCount;
}

@property (nonatomic) unsigned long long droppedCachedKeyUpdatesCount;
@property (nonatomic) unsigned long long droppedKeyCount;
@property (nonatomic) unsigned long long fileInvalidKeyCount;
@property (nonatomic) unsigned long long fileKeyCount;
@property (nonatomic) unsigned long long invalidFileSignatureCount;
@property (nonatomic) unsigned long long matchedKeyCount;
@property (nonatomic) unsigned long long newCachedKeyCount;
@property (nonatomic) unsigned long long processedFileCount;
@property (nonatomic) unsigned long long revokedKeyCount;
@property (nonatomic) unsigned long long updatedCachedKeyCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)droppedCachedKeyUpdatesCount;
- (unsigned long long)droppedKeyCount;
- (unsigned long long)fileInvalidKeyCount;
- (unsigned long long)fileKeyCount;
- (unsigned long long)invalidFileSignatureCount;
- (unsigned long long)matchedKeyCount;
- (unsigned long long)newCachedKeyCount;
- (unsigned long long)processedFileCount;
- (unsigned long long)revokedKeyCount;
- (void)setDroppedCachedKeyUpdatesCount:(unsigned long long)arg1;
- (void)setDroppedKeyCount:(unsigned long long)arg1;
- (void)setFileInvalidKeyCount:(unsigned long long)arg1;
- (void)setFileKeyCount:(unsigned long long)arg1;
- (void)setInvalidFileSignatureCount:(unsigned long long)arg1;
- (void)setMatchedKeyCount:(unsigned long long)arg1;
- (void)setNewCachedKeyCount:(unsigned long long)arg1;
- (void)setProcessedFileCount:(unsigned long long)arg1;
- (void)setRevokedKeyCount:(unsigned long long)arg1;
- (void)setUpdatedCachedKeyCount:(unsigned long long)arg1;
- (unsigned long long)updatedCachedKeyCount;

@end
