
@interface GEORPFeedbackQueryResult : PBCodable <NSCopying> {
    NSMutableArray * _feedbackInfos;
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int has_isResultTruncated : 1; 
    }  _flags;
    bool  _isResultTruncated;
    unsigned int  _maxResults;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *feedbackInfos;
@property (nonatomic) bool hasIsResultTruncated;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool isResultTruncated;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)feedbackInfoType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFeedbackInfo:(id)arg1;
- (void)clearFeedbackInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackInfoAtIndex:(unsigned long long)arg1;
- (id)feedbackInfos;
- (unsigned long long)feedbackInfosCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsResultTruncated;
- (bool)hasMaxResults;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isResultTruncated;
- (id)jsonRepresentation;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackInfos:(id)arg1;
- (void)setHasIsResultTruncated:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setIsResultTruncated:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
