
@interface NPKProtoOwnershipTokenResponse : PBCodable <NSCopying> {
    NSString * _identifier;
    NSString * _token;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasToken;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end
