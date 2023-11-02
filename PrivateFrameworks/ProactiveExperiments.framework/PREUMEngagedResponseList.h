
@interface PREUMEngagedResponseList : PBCodable <NSCopying> {
    unsigned int  _engagedItem;
    PREUMTrialExperiment * _experiment;
    int  _generationStatus;
    struct { 
        unsigned int timeToTap : 1; 
        unsigned int engagedItem : 1; 
        unsigned int generationStatus : 1; 
        unsigned int inputMethod : 1; 
    }  _has;
    int  _inputMethod;
    NSMutableArray * _items;
    PREUMMessageMetadata * _msgMetadata;
    unsigned long long  _timeToTap;
}

@property (nonatomic) unsigned int engagedItem;
@property (nonatomic, retain) PREUMTrialExperiment *experiment;
@property (nonatomic) int generationStatus;
@property (nonatomic) bool hasEngagedItem;
@property (nonatomic, readonly) bool hasExperiment;
@property (nonatomic) bool hasGenerationStatus;
@property (nonatomic) bool hasInputMethod;
@property (nonatomic, readonly) bool hasMsgMetadata;
@property (nonatomic) bool hasTimeToTap;
@property (nonatomic) int inputMethod;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) PREUMMessageMetadata *msgMetadata;
@property (nonatomic) unsigned long long timeToTap;

+ (Class)itemsType;

- (void).cxx_destruct;
- (int)StringAsGenerationStatus:(id)arg1;
- (int)StringAsInputMethod:(id)arg1;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)engagedItem;
- (id)experiment;
- (int)generationStatus;
- (id)generationStatusAsString:(int)arg1;
- (bool)hasEngagedItem;
- (bool)hasExperiment;
- (bool)hasGenerationStatus;
- (bool)hasInputMethod;
- (bool)hasMsgMetadata;
- (bool)hasTimeToTap;
- (unsigned long long)hash;
- (int)inputMethod;
- (id)inputMethodAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)msgMetadata;
- (bool)readFrom:(id)arg1;
- (void)setEngagedItem:(unsigned int)arg1;
- (void)setExperiment:(id)arg1;
- (void)setGenerationStatus:(int)arg1;
- (void)setHasEngagedItem:(bool)arg1;
- (void)setHasGenerationStatus:(bool)arg1;
- (void)setHasInputMethod:(bool)arg1;
- (void)setHasTimeToTap:(bool)arg1;
- (void)setInputMethod:(int)arg1;
- (void)setItems:(id)arg1;
- (void)setMsgMetadata:(id)arg1;
- (void)setTimeToTap:(unsigned long long)arg1;
- (unsigned long long)timeToTap;
- (void)writeTo:(id)arg1;

@end
