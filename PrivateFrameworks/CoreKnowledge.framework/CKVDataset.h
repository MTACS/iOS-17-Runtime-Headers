
@interface CKVDataset : NSObject {
    NSNumber * _identifier;
    unsigned short  _itemType;
    NSString * _originAppId;
    NSString * _userId;
}

@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) unsigned short itemType;
@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) NSString *userId;

+ (id)_datasetIdentifierFrom:(id)arg1 originAppId:(id)arg2 itemType:(unsigned short)arg3;

- (void).cxx_destruct;
- (id)changePublisher;
- (id)getItemTypeNumber;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithUserId:(id)arg1 originAppId:(id)arg2 itemType:(unsigned short)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataset:(id)arg1;
- (unsigned short)itemType;
- (id)originAppId;
- (id)userId;

@end
