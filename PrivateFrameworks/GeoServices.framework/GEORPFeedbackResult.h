
@interface GEORPFeedbackResult : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_idLookupResult : 1; 
        unsigned int read_imageUploadResult : 1; 
        unsigned int read_layoutConfigResult : 1; 
        unsigned int read_logEventResult : 1; 
        unsigned int read_queryResult : 1; 
        unsigned int read_submissionResult : 1; 
        unsigned int read_tdmFraudNotificationResult : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPFeedbackIdLookupResult * _idLookupResult;
    GEORPFeedbackImageUploadResult * _imageUploadResult;
    GEORPFeedbackLayoutConfigResult * _layoutConfigResult;
    GEORPFeedbackLogEventResult * _logEventResult;
    GEORPFeedbackQueryResult * _queryResult;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPFeedbackSubmissionResult * _submissionResult;
    GEORPFeedbackTdmFraudNotificationResult * _tdmFraudNotificationResult;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIdLookupResult;
@property (nonatomic, readonly) bool hasImageUploadResult;
@property (nonatomic, readonly) bool hasLayoutConfigResult;
@property (nonatomic, readonly) bool hasLogEventResult;
@property (nonatomic, readonly) bool hasQueryResult;
@property (nonatomic, readonly) bool hasSubmissionResult;
@property (nonatomic, readonly) bool hasTdmFraudNotificationResult;
@property (nonatomic, retain) GEORPFeedbackIdLookupResult *idLookupResult;
@property (nonatomic, retain) GEORPFeedbackImageUploadResult *imageUploadResult;
@property (nonatomic, retain) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
@property (nonatomic, retain) GEORPFeedbackLogEventResult *logEventResult;
@property (nonatomic, retain) GEORPFeedbackQueryResult *queryResult;
@property (nonatomic, retain) GEORPFeedbackSubmissionResult *submissionResult;
@property (nonatomic, retain) GEORPFeedbackTdmFraudNotificationResult *tdmFraudNotificationResult;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdLookupResult;
- (bool)hasImageUploadResult;
- (bool)hasLayoutConfigResult;
- (bool)hasLogEventResult;
- (bool)hasQueryResult;
- (bool)hasSubmissionResult;
- (bool)hasTdmFraudNotificationResult;
- (unsigned long long)hash;
- (id)idLookupResult;
- (id)imageUploadResult;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)layoutConfigResult;
- (id)logEventResult;
- (void)mergeFrom:(id)arg1;
- (id)queryResult;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdLookupResult:(id)arg1;
- (void)setImageUploadResult:(id)arg1;
- (void)setLayoutConfigResult:(id)arg1;
- (void)setLogEventResult:(id)arg1;
- (void)setQueryResult:(id)arg1;
- (void)setSubmissionResult:(id)arg1;
- (void)setTdmFraudNotificationResult:(id)arg1;
- (id)submissionResult;
- (id)tdmFraudNotificationResult;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
