
@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying> {
    NSMutableArray * _actualExpressPassInformations;
    struct { 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSMutableArray *actualExpressPassInformations;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

+ (Class)actualExpressPassInformationType;

- (void).cxx_destruct;
- (id)actualExpressPassInformationAtIndex:(unsigned long long)arg1;
- (id)actualExpressPassInformations;
- (unsigned long long)actualExpressPassInformationsCount;
- (void)addActualExpressPassInformation:(id)arg1;
- (void)clearActualExpressPassInformations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActualExpressPassInformations:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
