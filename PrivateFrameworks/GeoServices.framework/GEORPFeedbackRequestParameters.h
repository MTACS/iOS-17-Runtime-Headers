
@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_idLookupParameters : 1; 
        unsigned int read_imageUploadParameters : 1; 
        unsigned int read_layoutConfigParameters : 1; 
        unsigned int read_logEventParameters : 1; 
        unsigned int read_queryParameters : 1; 
        unsigned int read_submissionParameters : 1; 
        unsigned int read_tdmFraudNotificationParameters : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPFeedbackIdLookupParameters * _idLookupParameters;
    GEORPFeedbackImageUploadParameters * _imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters * _layoutConfigParameters;
    GEORPFeedbackLogEventParameters * _logEventParameters;
    GEORPFeedbackQueryParameters * _queryParameters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPFeedbackSubmissionParameters * _submissionParameters;
    GEORPTdmFraudNotificationParameters * _tdmFraudNotificationParameters;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIdLookupParameters;
@property (nonatomic, readonly) bool hasImageUploadParameters;
@property (nonatomic, readonly) bool hasLayoutConfigParameters;
@property (nonatomic, readonly) bool hasLogEventParameters;
@property (nonatomic, readonly) bool hasQueryParameters;
@property (nonatomic, readonly) bool hasSubmissionParameters;
@property (nonatomic, readonly) bool hasTdmFraudNotificationParameters;
@property (nonatomic, retain) GEORPFeedbackIdLookupParameters *idLookupParameters;
@property (nonatomic, retain) GEORPFeedbackImageUploadParameters *imageUploadParameters;
@property (nonatomic, retain) GEORPFeedbackLayoutConfigParameters *layoutConfigParameters;
@property (nonatomic, retain) GEORPFeedbackLogEventParameters *logEventParameters;
@property (nonatomic, retain) GEORPFeedbackQueryParameters *queryParameters;
@property (nonatomic, retain) GEORPFeedbackSubmissionParameters *submissionParameters;
@property (nonatomic, retain) GEORPTdmFraudNotificationParameters *tdmFraudNotificationParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdLookupParameters;
- (bool)hasImageUploadParameters;
- (bool)hasLayoutConfigParameters;
- (bool)hasLogEventParameters;
- (bool)hasQueryParameters;
- (bool)hasSubmissionParameters;
- (bool)hasTdmFraudNotificationParameters;
- (unsigned long long)hash;
- (id)idLookupParameters;
- (id)imageUploadParameters;
- (id)init;
- (id)initForRunningTrackIssue:(int)arg1 trackCoordinateLatitude:(double)arg2 trackCoordinateLongitude:(double)arg3 trackFeatureID:(id)arg4 nameOfTrack:(id)arg5 numberOfLanes:(id)arg6 comment:(id)arg7;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIncidentAnnotationDetails:(id)arg1 userPath:(id)arg2;
- (id)initWithIncidentLocation:(id)arg1 userLocation:(id)arg2 type:(int)arg3 historicalLocations:(id)arg4 userPath:(id)arg5;
- (id)initWithJSON:(id)arg1;
- (id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(struct { double x1; double x2; })arg10;
- (bool)isEqual:(id)arg1;
- (bool)isPOIEnrichment;
- (id)jsonRepresentation;
- (id)layoutConfigParameters;
- (id)logEventParameters;
- (void)mergeFrom:(id)arg1;
- (id)queryParameters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdLookupParameters:(id)arg1;
- (void)setImageUploadParameters:(id)arg1;
- (void)setLayoutConfigParameters:(id)arg1;
- (void)setLogEventParameters:(id)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)setSubmissionParameters:(id)arg1;
- (void)setTdmFraudNotificationParameters:(id)arg1;
- (id)submissionParameters;
- (id)tdmFraudNotificationParameters;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
