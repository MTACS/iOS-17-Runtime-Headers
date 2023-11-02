
@interface FCCKRecordZone : NSObject {
    FCCKPrivateDatabase * _database;
    <FCCKRecordZoneDelegate> * _delegate;
    CKRecordZoneID * _recordZoneID;
    bool  _zoneReady;
}

- (void).cxx_destruct;
- (id)description;

@end
