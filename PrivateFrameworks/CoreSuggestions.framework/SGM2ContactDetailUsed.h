
@interface SGM2ContactDetailUsed : PBCodable <NSCopying> {
    int  _app;
    struct { 
        unsigned int app : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _key;
    int  _type;
}

@property (nonatomic) int app;
@property (nonatomic) bool hasApp;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)StringAsType:(id)arg1;
- (int)app;
- (id)appAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApp;
- (bool)hasKey;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(int)arg1;
- (void)setHasApp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
