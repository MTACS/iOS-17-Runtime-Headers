
@interface MTIDCloudKitLocalDB : NSObject {
    <MTIDCloudKitLocalDBDelegate> * _delegate;
    NSURL * _pathURL;
    NSString * _recordType;
    CKRecordZoneID * _recordZoneID;
    bool  _zoneCreated;
}

@property (nonatomic) <MTIDCloudKitLocalDBDelegate> *delegate;
@property (nonatomic, retain) NSURL *pathURL;
@property (nonatomic, retain) NSString *recordType;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic) bool zoneCreated;

- (void).cxx_destruct;
- (id)allRecords;
- (void)clearData;
- (id)dataForName:(id)arg1 error:(id*)arg2;
- (id)decodeRecordFromData:(id)arg1 recordID:(id)arg2 isSynchronized:(bool)arg3;
- (id)delegate;
- (bool)deleteIfExists:(id)arg1 error:(id*)arg2;
- (bool)deleteRecordWithID:(id)arg1 error:(id*)arg2;
- (id)encodeRecord:(id)arg1;
- (bool)fileExists:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 recordType:(id)arg2 recordZoneID:(id)arg3;
- (bool)needsFetchRecords;
- (id)pathURL;
- (id)pendingRecordIDs;
- (id)recordType;
- (id)recordWithID:(id)arg1 error:(id*)arg2;
- (id)recordZoneID;
- (void)setDelegate:(id)arg1;
- (void)setNeedsFetchRecords:(bool)arg1;
- (void)setPathURL:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setSyncStatusCode:(id)arg1;
- (bool)setUserRecordIDName:(id)arg1;
- (void)setZoneCreated:(bool)arg1;
- (id)syncStatusCode;
- (id)userRecordIDName;
- (bool)writeData:(id)arg1 forName:(id)arg2 error:(id*)arg3;
- (bool)writeRecord:(id)arg1 error:(id*)arg2;
- (bool)zoneCreated;

@end
