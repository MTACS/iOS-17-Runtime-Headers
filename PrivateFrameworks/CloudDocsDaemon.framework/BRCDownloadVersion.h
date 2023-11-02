
@interface BRCDownloadVersion : BRCDownload {
    BRCClientZone * _clientZone;
    BRFileObjectID * _fileObjectID;
    NSError * _gsError;
    bool  _isLoser;
    CKRecord * _secondaryRecord;
    CKRecordID * _secondaryRecordID;
    bool  _sharedZone;
    GSPermanentStorage * _storage;
}

@property (nonatomic, readonly) BRFileObjectID *fileObjectID;
@property (nonatomic, readonly) NSError *gsError;
@property (nonatomic, readonly) bool isLoser;
@property (nonatomic, retain) BRCProgress *progress;
@property (nonatomic, readonly) GSPermanentStorage *storage;

- (void).cxx_destruct;
- (id)_stageContentWithSession:(id)arg1 error:(id*)arg2;
- (id)_stageWithSession:(id)arg1 creationInfo:(id*)arg2 error:(id*)arg3;
- (id)description;
- (id)fileObjectID;
- (id)gsError;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(bool)arg4;
- (bool)isLoser;
- (int)kind;
- (id)progress;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void)setProgress:(id)arg1;
- (void)setSecondaryRecord:(id)arg1;
- (id)storage;

@end
