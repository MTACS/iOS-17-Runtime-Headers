
@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying> {
    NSString * _comments;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_comments : 1; 
        unsigned int read_postedAt : 1; 
        unsigned int read_postedBy : 1; 
        unsigned int read_surveyResponses : 1; 
        unsigned int read_uuid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPTimestamp * _postedAt;
    GEORPPostedBy * _postedBy;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _surveyResponses;
    PBUnknownFields * _unknownFields;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *comments;
@property (nonatomic, readonly) bool hasComments;
@property (nonatomic, readonly) bool hasPostedAt;
@property (nonatomic, readonly) bool hasPostedBy;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) GEORPTimestamp *postedAt;
@property (nonatomic, retain) GEORPPostedBy *postedBy;
@property (nonatomic, retain) NSMutableArray *surveyResponses;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uuid;

+ (bool)isValid:(id)arg1;
+ (Class)surveyResponseType;

- (void).cxx_destruct;
- (void)addSurveyResponse:(id)arg1;
- (void)clearSurveyResponses;
- (void)clearUnknownFields:(bool)arg1;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComments;
- (bool)hasPostedAt;
- (bool)hasPostedBy;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)postedAt;
- (id)postedBy;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setPostedAt:(id)arg1;
- (void)setPostedBy:(id)arg1;
- (void)setSurveyResponses:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)surveyResponseAtIndex:(unsigned long long)arg1;
- (id)surveyResponses;
- (unsigned long long)surveyResponsesCount;
- (id)unknownFields;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
