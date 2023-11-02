
@interface NPKProtoRemoveExpressPassWithUniqueIdentifierResponse : PBCodable <NSCopying> {
    NSData * _actualExpressPassInformation;
    NSMutableArray * _currentExpressPassesInformations;
    struct { 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSData *actualExpressPassInformation;
@property (nonatomic, retain) NSMutableArray *currentExpressPassesInformations;
@property (nonatomic, readonly) bool hasActualExpressPassInformation;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

+ (Class)currentExpressPassesInformationType;

- (void).cxx_destruct;
- (id)actualExpressPassInformation;
- (void)addCurrentExpressPassesInformation:(id)arg1;
- (void)clearCurrentExpressPassesInformations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentExpressPassesInformationAtIndex:(unsigned long long)arg1;
- (id)currentExpressPassesInformations;
- (unsigned long long)currentExpressPassesInformationsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActualExpressPassInformation;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActualExpressPassInformation:(id)arg1;
- (void)setCurrentExpressPassesInformations:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
