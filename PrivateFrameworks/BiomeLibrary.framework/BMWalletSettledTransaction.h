
@interface BMWalletSettledTransaction : BMEventBase <BMStoreData> {
    NSString * _geoPOICategory;
    int  _merchantType;
    NSString * _passUniqueID;
    NSString * _transactionID;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *geoPOICategory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int merchantType;
@property (nonatomic, readonly) NSString *passUniqueID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transactionID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)geoPOICategory;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPassUniqueID:(id)arg1 transactionID:(id)arg2 merchantType:(int)arg3 geoPOICategory:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)merchantType;
- (id)passUniqueID;
- (id)serialize;
- (id)transactionID;
- (void)writeTo:(id)arg1;

@end
