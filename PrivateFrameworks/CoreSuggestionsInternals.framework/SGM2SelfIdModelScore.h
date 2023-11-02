
@interface SGM2SelfIdModelScore : PBCodable <NSCopying> {
    struct { 
        unsigned int model : 1; 
        unsigned int supervision : 1; 
        unsigned int result : 1; 
    }  _has;
    NSString * _key;
    int  _model;
    bool  _result;
    int  _supervision;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasModel;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasSupervision;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int model;
@property (nonatomic) bool result;
@property (nonatomic) int supervision;

- (void).cxx_destruct;
- (int)StringAsModel:(id)arg1;
- (int)StringAsSupervision:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasModel;
- (bool)hasResult;
- (bool)hasSupervision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (int)model;
- (id)modelAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (bool)result;
- (void)setHasModel:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasSupervision:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setModel:(int)arg1;
- (void)setResult:(bool)arg1;
- (void)setSupervision:(int)arg1;
- (int)supervision;
- (id)supervisionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
