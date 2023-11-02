
@interface PXSearchResultCollection : NSObject <PXNewSearchResult> {
    unsigned long long  _assetCount;
    NSString * _collectionUUID;
    NSDate * _endDate;
    NSString * _identifier;
    NSDate * _startDate;
    NSString * _subtitle;
    unsigned long long  _subtype;
    NSString * _thumbnailAssetUUID;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long assetCount;
@property (nonatomic, copy) NSString *collectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long subtype;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thumbnailAssetUUID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

+ (id)_dateIntervalFormatter;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)collectionUUID;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCount:(unsigned long long)arg3 collectionUUID:(id)arg4 thumbnailAssetUUID:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 subtype:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (void)setAssetCount:(unsigned long long)arg1;
- (void)setCollectionUUID:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailAssetUUID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)startDate;
- (id)subtitle;
- (unsigned long long)subtype;
- (id)thumbnailAssetUUID;
- (id)title;
- (unsigned long long)type;

@end
