
@interface HDCodableEntityIdentifier : PBCodable <NSCopying> {
    struct { 
        unsigned int identifier : 1; 
    }  _has;
    long long  _identifier;
    NSString * _schema;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic, readonly) bool hasSchema;
@property (nonatomic) long long identifier;
@property (nonatomic, retain) NSString *schema;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasSchema;
- (unsigned long long)hash;
- (long long)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)schema;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setSchema:(id)arg1;
- (void)writeTo:(id)arg1;

@end
