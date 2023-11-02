
@interface HDCodableListUserDomainConcept : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
