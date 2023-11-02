
@interface BMWalletTransaction : BMEventBase <BMStoreData> {
    int  _merchantType;
    NSString * _passLocalizedDescription;
    NSString * _passUniqueID;
    NSString * _poiCategory;
    NSString * _transactionID;
    int  _transactionType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPassUniqueID:(id)arg1 passLocalizedDescription:(id)arg2 transactionType:(int)arg3 transactionID:(id)arg4;
- (id)initWithPassUniqueID:(id)arg1 passLocalizedDescription:(id)arg2 transactionType:(int)arg3 transactionID:(id)arg4 merchantType:(int)arg5 poiCategory:(id)arg6;
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
