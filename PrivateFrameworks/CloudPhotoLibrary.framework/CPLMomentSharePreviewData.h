
@interface CPLMomentSharePreviewData : PBCodable <NSCopying> {
    NSString * _cropRectString;
    NSMutableArray * _curatedAssetIdentifiers;
    NSString * _keyAssetIdentifier;
    NSMutableArray * _previewImageDatas;
}

@property (nonatomic, retain) NSString *cropRectString;
@property (nonatomic, retain) NSMutableArray *curatedAssetIdentifiers;
@property (nonatomic, readonly) bool hasCropRectString;
@property (nonatomic, readonly) bool hasKeyAssetIdentifier;
@property (nonatomic, retain) NSString *keyAssetIdentifier;
@property (nonatomic, retain) NSMutableArray *previewImageDatas;

+ (Class)curatedAssetIdentifiersType;
+ (Class)previewImageDataType;

- (void).cxx_destruct;
- (void)addCuratedAssetIdentifiers:(id)arg1;
- (void)addPreviewImageData:(id)arg1;
- (void)clearCuratedAssetIdentifiers;
- (void)clearPreviewImageDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropRectString;
- (id)curatedAssetIdentifiers;
- (id)curatedAssetIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)curatedAssetIdentifiersCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCropRectString;
- (bool)hasKeyAssetIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyAssetIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)previewImageDataAtIndex:(unsigned long long)arg1;
- (id)previewImageDatas;
- (unsigned long long)previewImageDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setCropRectString:(id)arg1;
- (void)setCuratedAssetIdentifiers:(id)arg1;
- (void)setKeyAssetIdentifier:(id)arg1;
- (void)setPreviewImageDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
