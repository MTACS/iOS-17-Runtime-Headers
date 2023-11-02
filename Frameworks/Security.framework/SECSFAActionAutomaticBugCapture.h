
@interface SECSFAActionAutomaticBugCapture : PBCodable <NSCopying> {
    NSString * _domain;
    NSString * _subtype;
    NSString * _type;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasSubtype;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *subtype;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasDomain;
- (bool)hasSubtype;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtype;
- (id)type;
- (void)writeTo:(id)arg1;

@end
