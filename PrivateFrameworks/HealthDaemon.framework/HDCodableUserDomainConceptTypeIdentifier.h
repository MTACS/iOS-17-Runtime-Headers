
@interface HDCodableUserDomainConceptTypeIdentifier : PBCodable <NSCopying> {
    long long  _code;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSString * _schema;
}

@property (nonatomic) long long code;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasSchema;
@property (nonatomic, retain) NSString *schema;

- (void).cxx_destruct;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCode;
- (bool)hasSchema;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)schema;
- (void)setCode:(long long)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setSchema:(id)arg1;
- (void)writeTo:(id)arg1;

@end
