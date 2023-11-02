
@interface GEORPFeedbackResponse : PBCodable <NSCopying> {
    bool  _attestationNotFound;
    bool  _discardLogs;
    int  _feedbackRequestType;
    GEORPFeedbackResult * _feedbackResult;
    struct { 
        unsigned int has_feedbackRequestType : 1; 
        unsigned int has_status : 1; 
        unsigned int has_attestationNotFound : 1; 
        unsigned int has_discardLogs : 1; 
    }  _flags;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool attestationNotFound;
@property (nonatomic) bool discardLogs;
@property (nonatomic) int feedbackRequestType;
@property (nonatomic, retain) GEORPFeedbackResult *feedbackResult;
@property (nonatomic) bool hasAttestationNotFound;
@property (nonatomic) bool hasDiscardLogs;
@property (nonatomic) bool hasFeedbackRequestType;
@property (nonatomic, readonly) bool hasFeedbackResult;
@property (nonatomic) bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackRequestType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (bool)attestationNotFound;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)discardLogs;
- (int)feedbackRequestType;
- (id)feedbackRequestTypeAsString:(int)arg1;
- (id)feedbackResult;
- (bool)hasAttestationNotFound;
- (bool)hasDiscardLogs;
- (bool)hasFeedbackRequestType;
- (bool)hasFeedbackResult;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttestationNotFound:(bool)arg1;
- (void)setDiscardLogs:(bool)arg1;
- (void)setFeedbackRequestType:(int)arg1;
- (void)setFeedbackResult:(id)arg1;
- (void)setHasAttestationNotFound:(bool)arg1;
- (void)setHasDiscardLogs:(bool)arg1;
- (void)setHasFeedbackRequestType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
