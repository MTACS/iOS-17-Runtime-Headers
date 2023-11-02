
@interface PXSearchResultAsset : NSObject <PXNewSearchResult> {
    unsigned long long  _assetCount;
    NSString * _assetUUID;
    NSString * _identifier;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long assetCount;
@property (nonatomic, copy) NSString *assetUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUID;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAssetUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAssetCount:(unsigned long long)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;

@end
