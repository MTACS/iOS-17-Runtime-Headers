
@interface HVPBContentState : PBCodable <NSCopying> {
    NSMutableArray * _consumers;
    struct { 
        unsigned int levelOfService : 1; 
    }  _has;
    int  _levelOfService;
}

@property (nonatomic, retain) NSMutableArray *consumers;
@property (nonatomic) bool hasLevelOfService;
@property (nonatomic) int levelOfService;

+ (Class)consumersType;

- (void).cxx_destruct;
- (void)addConsumers:(id)arg1;
- (void)clearConsumers;
- (id)consumers;
- (id)consumersAtIndex:(unsigned long long)arg1;
- (unsigned long long)consumersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLevelOfService;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)levelOfService;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConsumers:(id)arg1;
- (void)setHasLevelOfService:(bool)arg1;
- (void)setLevelOfService:(int)arg1;
- (void)writeTo:(id)arg1;

@end
