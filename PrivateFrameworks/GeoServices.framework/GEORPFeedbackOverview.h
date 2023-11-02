
@interface GEORPFeedbackOverview : PBCodable <NSCopying> {
    GEORPTimestamp * _createdAt;
    int  _feedbackState;
    struct { 
        unsigned int has_feedbackState : 1; 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_createdAt : 1; 
        unsigned int read_lastUpdatedAt : 1; 
        unsigned int read_stateDescription : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPTimestamp * _lastUpdatedAt;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _stateDescription;
    NSString * _title;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPTimestamp *createdAt;
@property (nonatomic) int feedbackState;
@property (nonatomic, readonly) bool hasCreatedAt;
@property (nonatomic) bool hasFeedbackState;
@property (nonatomic, readonly) bool hasLastUpdatedAt;
@property (nonatomic, readonly) bool hasStateDescription;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEORPTimestamp *lastUpdatedAt;
@property (nonatomic, retain) NSString *stateDescription;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackState:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackState;
- (id)feedbackStateAsString:(int)arg1;
- (bool)hasCreatedAt;
- (bool)hasFeedbackState;
- (bool)hasLastUpdatedAt;
- (bool)hasStateDescription;
- (bool)hasTitle;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lastUpdatedAt;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setFeedbackState:(int)arg1;
- (void)setHasFeedbackState:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLastUpdatedAt:(id)arg1;
- (void)setStateDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)stateDescription;
- (id)title;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
