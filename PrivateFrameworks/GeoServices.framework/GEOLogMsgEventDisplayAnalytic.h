
@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying> {
    int  _displayActionTrigger;
    int  _displayEvent;
    struct { 
        unsigned int has_meanImageSpacing : 1; 
        unsigned int has_displayActionTrigger : 1; 
        unsigned int has_displayEvent : 1; 
        unsigned int has_movementDistance : 1; 
        unsigned int has_renderedImageCount : 1; 
        unsigned int has_requestedImageCount : 1; 
        unsigned int has_requiredResourcesAvailable : 1; 
        unsigned int has_totalTime : 1; 
    }  _flags;
    double  _meanImageSpacing;
    unsigned int  _movementDistance;
    unsigned int  _renderedImageCount;
    unsigned int  _requestedImageCount;
    unsigned int  _requiredResourcesAvailable;
    unsigned int  _totalTime;
}

@property (nonatomic) int displayActionTrigger;
@property (nonatomic) int displayEvent;
@property (nonatomic) bool hasDisplayActionTrigger;
@property (nonatomic) bool hasDisplayEvent;
@property (nonatomic) bool hasMeanImageSpacing;
@property (nonatomic) bool hasMovementDistance;
@property (nonatomic) bool hasRenderedImageCount;
@property (nonatomic) bool hasRequestedImageCount;
@property (nonatomic) bool hasRequiredResourcesAvailable;
@property (nonatomic) bool hasTotalTime;
@property (nonatomic) double meanImageSpacing;
@property (nonatomic) unsigned int movementDistance;
@property (nonatomic) unsigned int renderedImageCount;
@property (nonatomic) unsigned int requestedImageCount;
@property (nonatomic) unsigned int requiredResourcesAvailable;
@property (nonatomic) unsigned int totalTime;

+ (bool)isValid:(id)arg1;

- (int)StringAsDisplayActionTrigger:(id)arg1;
- (int)StringAsDisplayEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayActionTrigger;
- (id)displayActionTriggerAsString:(int)arg1;
- (int)displayEvent;
- (id)displayEventAsString:(int)arg1;
- (bool)hasDisplayActionTrigger;
- (bool)hasDisplayEvent;
- (bool)hasMeanImageSpacing;
- (bool)hasMovementDistance;
- (bool)hasRenderedImageCount;
- (bool)hasRequestedImageCount;
- (bool)hasRequiredResourcesAvailable;
- (bool)hasTotalTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)meanImageSpacing;
- (void)mergeFrom:(id)arg1;
- (unsigned int)movementDistance;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)renderedImageCount;
- (unsigned int)requestedImageCount;
- (unsigned int)requiredResourcesAvailable;
- (void)setDisplayActionTrigger:(int)arg1;
- (void)setDisplayEvent:(int)arg1;
- (void)setHasDisplayActionTrigger:(bool)arg1;
- (void)setHasDisplayEvent:(bool)arg1;
- (void)setHasMeanImageSpacing:(bool)arg1;
- (void)setHasMovementDistance:(bool)arg1;
- (void)setHasRenderedImageCount:(bool)arg1;
- (void)setHasRequestedImageCount:(bool)arg1;
- (void)setHasRequiredResourcesAvailable:(bool)arg1;
- (void)setHasTotalTime:(bool)arg1;
- (void)setMeanImageSpacing:(double)arg1;
- (void)setMovementDistance:(unsigned int)arg1;
- (void)setRenderedImageCount:(unsigned int)arg1;
- (void)setRequestedImageCount:(unsigned int)arg1;
- (void)setRequiredResourcesAvailable:(unsigned int)arg1;
- (void)setTotalTime:(unsigned int)arg1;
- (unsigned int)totalTime;
- (void)writeTo:(id)arg1;

@end
