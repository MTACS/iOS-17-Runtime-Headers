
@interface FCCKDatabaseSubscriptionsMiddleware : NSObject <FCCKDatabaseRecordMiddleware>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
- (id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
- (id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;

@end
