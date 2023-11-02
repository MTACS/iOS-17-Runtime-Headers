
@interface PREUMResponseList : PBCodable <NSCopying> {
    PREUMTrialExperiment * _experiment;
    int  _generationStatus;
    struct { 
        unsigned int responseTimePerf : 1; 
        unsigned int generationStatus : 1; 
        unsigned int isCached : 1; 
    }  _has;
    bool  _isCached;
    NSMutableArray * _items;
    PREUMMessageMetadata * _msgMetadata;
    unsigned long long  _responseTimePerf;
}

@property (nonatomic, retain) PREUMTrialExperiment *experiment;
@property (nonatomic) int generationStatus;
@property (nonatomic, readonly) bool hasExperiment;
@property (nonatomic) bool hasGenerationStatus;
@property (nonatomic) bool hasIsCached;
@property (nonatomic, readonly) bool hasMsgMetadata;
@property (nonatomic) bool hasResponseTimePerf;
@property (nonatomic) bool isCached;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) PREUMMessageMetadata *msgMetadata;
@property (nonatomic) unsigned long long responseTimePerf;

+ (Class)itemsType;

- (void).cxx_destruct;
- (int)StringAsGenerationStatus:(id)arg1;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experiment;
- (int)generationStatus;
- (id)generationStatusAsString:(int)arg1;
- (bool)hasExperiment;
- (bool)hasGenerationStatus;
- (bool)hasIsCached;
- (bool)hasMsgMetadata;
- (bool)hasResponseTimePerf;
- (unsigned long long)hash;
- (bool)isCached;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)msgMetadata;
- (bool)readFrom:(id)arg1;
- (unsigned long long)responseTimePerf;
- (void)setExperiment:(id)arg1;
- (void)setGenerationStatus:(int)arg1;
- (void)setHasGenerationStatus:(bool)arg1;
- (void)setHasIsCached:(bool)arg1;
- (void)setHasResponseTimePerf:(bool)arg1;
- (void)setIsCached:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setMsgMetadata:(id)arg1;
- (void)setResponseTimePerf:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
