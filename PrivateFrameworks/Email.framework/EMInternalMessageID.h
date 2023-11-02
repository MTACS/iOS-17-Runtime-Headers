
@interface EMInternalMessageID : NSObject {
    long long  _databaseID;
    NSString * _externalID;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly, copy) NSString *externalID;

- (void).cxx_destruct;
- (long long)databaseID;
- (id)externalID;
- (id)initWithDatabaseID:(long long)arg1 externalID:(id)arg2;

@end
