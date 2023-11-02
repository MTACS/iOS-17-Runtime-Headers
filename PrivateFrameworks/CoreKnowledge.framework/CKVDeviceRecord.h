
@interface CKVDeviceRecord : NSObject <CKVDatabaseRecord> {
    NSString * _deviceId;
    NSNumber * _deviceRowId;
    bool  _isLocal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) NSNumber *deviceRowId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocal;
@property (readonly) Class superclass;

+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)arg1;
+ (id)tableName;

- (void).cxx_destruct;
- (id)description;
- (id)deviceId;
- (id)deviceRowId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabaseValueRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemRecord:(id)arg1;
- (bool)isLocal;

@end
