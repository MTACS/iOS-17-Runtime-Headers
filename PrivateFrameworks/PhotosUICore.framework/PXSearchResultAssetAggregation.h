
@interface PXSearchResultAssetAggregation : NSObject <PXNewSearchResult> {
    unsigned long long  _assetCount;
    NSArray * _assetUUIDs;
    NSString * _identifier;
    NSString * _subtitle;
    unsigned long long  _subtype;
    NSString * _thumbnailAssetUUID;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long assetCount;
@property (nonatomic, readonly, copy) NSArray *assetUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long subtype;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thumbnailAssetUUID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetUUIDs:(id)arg3 subtype:(unsigned long long)arg4 identifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setAssetCount:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailAssetUUID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)subtitle;
- (unsigned long long)subtype;
- (id)thumbnailAssetUUID;
- (id)title;
- (unsigned long long)type;

@end
