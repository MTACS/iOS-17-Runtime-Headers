
@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    long long  _businessID;
    int  _feedbackType;
    struct { 
        unsigned int has_sessionGUID : 1; 
        unsigned int has_businessID : 1; 
        unsigned int has_timestamp : 1; 
        unsigned int has_feedbackType : 1; 
        unsigned int has_localSearchProviderID : 1; 
        unsigned int has_numberOfResults : 1; 
        unsigned int has_positionInResults : 1; 
        unsigned int has_sequenceNumber : 1; 
    }  _flags;
    int  _localSearchProviderID;
    int  _numberOfResults;
    int  _positionInResults;
    int  _sequenceNumber;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionGUID;
    double  _timestamp;
}

@property (nonatomic) long long businessID;
@property (nonatomic) int feedbackType;
@property (nonatomic) bool hasBusinessID;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic) bool hasNumberOfResults;
@property (nonatomic) bool hasPositionInResults;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionGUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int numberOfResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property (nonatomic) double timestamp;

+ (bool)isValid:(id)arg1;

- (int)StringAsFeedbackType:(id)arg1;
- (long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)hasBusinessID;
- (bool)hasFeedbackType;
- (bool)hasLocalSearchProviderID;
- (bool)hasNumberOfResults;
- (bool)hasPositionInResults;
- (bool)hasSequenceNumber;
- (bool)hasSessionGUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (int)numberOfResults;
- (int)positionInResults;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)sequenceNumber;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setBusinessID:(long long)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasBusinessID:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasNumberOfResults:(bool)arg1;
- (void)setHasPositionInResults:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionGUID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setNumberOfResults:(int)arg1;
- (void)setPositionInResults:(int)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setSessionGUID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
