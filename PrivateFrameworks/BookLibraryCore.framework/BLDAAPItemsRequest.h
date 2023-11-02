
@interface BLDAAPItemsRequest : BLDAAPURLRequest {
    NSNumber * _bagDatabaseID;
}

@property (nonatomic, retain) NSNumber *bagDatabaseID;

- (void).cxx_destruct;
- (id)bagDatabaseID;
- (id)createDaapURL:(id)arg1;
- (id)initWithDSID:(id)arg1 reason:(long long)arg2 databaseID:(id)arg3 body:(id)arg4;
- (void)setBagDatabaseID:(id)arg1;

@end
