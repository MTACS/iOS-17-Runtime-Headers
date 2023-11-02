
@interface ContextualActionPredictionsDataCommonFileFeatures : PBCodable <NSCopying> {
    struct { 
        unsigned int size : 1; 
        unsigned int timeSinceCreation : 1; 
        unsigned int timeSinceLastAdded : 1; 
        unsigned int timeSinceLastOpened : 1; 
        unsigned int timeSinceModified : 1; 
        unsigned int isMultipleFileSelection : 1; 
    }  _has;
    bool  _isMultipleFileSelection;
    int  _size;
    int  _timeSinceCreation;
    int  _timeSinceLastAdded;
    int  _timeSinceLastOpened;
    int  _timeSinceModified;
    NSString * _uTI;
}

@property (nonatomic) bool hasIsMultipleFileSelection;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasTimeSinceCreation;
@property (nonatomic) bool hasTimeSinceLastAdded;
@property (nonatomic) bool hasTimeSinceLastOpened;
@property (nonatomic) bool hasTimeSinceModified;
@property (nonatomic, readonly) bool hasUTI;
@property (nonatomic) bool isMultipleFileSelection;
@property (nonatomic) int size;
@property (nonatomic) int timeSinceCreation;
@property (nonatomic) int timeSinceLastAdded;
@property (nonatomic) int timeSinceLastOpened;
@property (nonatomic) int timeSinceModified;
@property (nonatomic, retain) NSString *uTI;

- (void).cxx_destruct;
- (int)StringAsSize:(id)arg1;
- (int)StringAsTimeSinceCreation:(id)arg1;
- (int)StringAsTimeSinceLastAdded:(id)arg1;
- (int)StringAsTimeSinceLastOpened:(id)arg1;
- (int)StringAsTimeSinceModified:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsMultipleFileSelection;
- (bool)hasSize;
- (bool)hasTimeSinceCreation;
- (bool)hasTimeSinceLastAdded;
- (bool)hasTimeSinceLastOpened;
- (bool)hasTimeSinceModified;
- (bool)hasUTI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMultipleFileSelection;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsMultipleFileSelection:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasTimeSinceCreation:(bool)arg1;
- (void)setHasTimeSinceLastAdded:(bool)arg1;
- (void)setHasTimeSinceLastOpened:(bool)arg1;
- (void)setHasTimeSinceModified:(bool)arg1;
- (void)setIsMultipleFileSelection:(bool)arg1;
- (void)setSize:(int)arg1;
- (void)setTimeSinceCreation:(int)arg1;
- (void)setTimeSinceLastAdded:(int)arg1;
- (void)setTimeSinceLastOpened:(int)arg1;
- (void)setTimeSinceModified:(int)arg1;
- (void)setUTI:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (int)timeSinceCreation;
- (id)timeSinceCreationAsString:(int)arg1;
- (int)timeSinceLastAdded;
- (id)timeSinceLastAddedAsString:(int)arg1;
- (int)timeSinceLastOpened;
- (id)timeSinceLastOpenedAsString:(int)arg1;
- (int)timeSinceModified;
- (id)timeSinceModifiedAsString:(int)arg1;
- (id)uTI;
- (void)writeTo:(id)arg1;

@end
