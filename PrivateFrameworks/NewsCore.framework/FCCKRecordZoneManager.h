
@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate> {
    NSDictionary * _ckRecordZonesByID;
    FCCKPrivateDatabase * _database;
    NSDictionary * _fcRecordZonesByName;
    NSArray * _recordZoneIDs;
    FCAsyncSerialQueue * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
