
@interface _INPBMediaSubItem : PBCodable <NSCopying, NSSecureCoding, _INPBMediaSubItem> {
    NSString * _assetInfo;
    struct { }  _has;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *assetInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAssetInfo;
@property (nonatomic, readonly) bool hasIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAssetInfo;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssetInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
