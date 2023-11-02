
@interface NPKProtoAvailableProductsRequest : PBRequest <NSCopying> {
    NSData * _productsRequestData;
}

@property (nonatomic, readonly) bool hasProductsRequestData;
@property (nonatomic, retain) NSData *productsRequestData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProductsRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)productsRequestData;
- (bool)readFrom:(id)arg1;
- (void)setProductsRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
