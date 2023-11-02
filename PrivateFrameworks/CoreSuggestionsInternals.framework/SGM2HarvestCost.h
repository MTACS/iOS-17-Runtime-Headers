
@interface SGM2HarvestCost : PBCodable <NSCopying> {
    int  _documentSource;
    int  _harvestSource;
    bool  _harvestedOnBattery;
    struct { 
        unsigned int documentSource : 1; 
        unsigned int harvestSource : 1; 
        unsigned int harvestedOnBattery : 1; 
        unsigned int highPriority : 1; 
        unsigned int receivedOnBattery : 1; 
    }  _has;
    bool  _highPriority;
    bool  _receivedOnBattery;
}

@property (nonatomic) int documentSource;
@property (nonatomic) int harvestSource;
@property (nonatomic) bool harvestedOnBattery;
@property (nonatomic) bool hasDocumentSource;
@property (nonatomic) bool hasHarvestSource;
@property (nonatomic) bool hasHarvestedOnBattery;
@property (nonatomic) bool hasHighPriority;
@property (nonatomic) bool hasReceivedOnBattery;
@property (nonatomic) bool highPriority;
@property (nonatomic) bool receivedOnBattery;

- (int)StringAsDocumentSource:(id)arg1;
- (int)StringAsHarvestSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)documentSource;
- (id)documentSourceAsString:(int)arg1;
- (int)harvestSource;
- (id)harvestSourceAsString:(int)arg1;
- (bool)harvestedOnBattery;
- (bool)hasDocumentSource;
- (bool)hasHarvestSource;
- (bool)hasHarvestedOnBattery;
- (bool)hasHighPriority;
- (bool)hasReceivedOnBattery;
- (unsigned long long)hash;
- (bool)highPriority;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)receivedOnBattery;
- (void)setDocumentSource:(int)arg1;
- (void)setHarvestSource:(int)arg1;
- (void)setHarvestedOnBattery:(bool)arg1;
- (void)setHasDocumentSource:(bool)arg1;
- (void)setHasHarvestSource:(bool)arg1;
- (void)setHasHarvestedOnBattery:(bool)arg1;
- (void)setHasHighPriority:(bool)arg1;
- (void)setHasReceivedOnBattery:(bool)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setReceivedOnBattery:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
