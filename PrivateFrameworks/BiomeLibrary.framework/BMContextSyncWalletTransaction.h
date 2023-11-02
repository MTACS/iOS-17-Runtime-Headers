
@interface BMContextSyncWalletTransaction : BMEventBase <BMStoreData> {
    NSString * _ID;
    NSString * _deviceUUID;
    int  _merchantType;
    NSString * _passLocalizedDescription;
    NSString * _passUniqueID;
    NSString * _poiCategory;
    NSString * _transactionID;
    int  _transactionType;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int merchantType;
@property (nonatomic, readonly) NSString *passLocalizedDescription;
@property (nonatomic, readonly) NSString *passUniqueID;
@property (nonatomic, readonly) NSString *poiCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transactionID;
@property (nonatomic, readonly) int transactionType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)ID;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceUUID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithID:(id)arg1 deviceUUID:(id)arg2 passUniqueID:(id)arg3 passLocalizedDescription:(id)arg4 transactionType:(int)arg5 transactionID:(id)arg6 merchantType:(int)arg7 poiCategory:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)merchantType;
- (id)passLocalizedDescription;
- (id)passUniqueID;
- (id)poiCategory;
- (id)serialize;
- (id)transactionID;
- (int)transactionType;
- (void)writeTo:(id)arg1;

@end
