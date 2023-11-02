
@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {
    NSString * _feedbackId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_feedbackId : 1; 
        unsigned int read_imageIdMapEntrys : 1; 
        unsigned int read_photoAttributionPreferencesUpdateResult : 1; 
        unsigned int read_rapInfo : 1; 
        unsigned int read_tdmFraudRequestInfo : 1; 
        unsigned int read_thirdPartyPhotoSharingPreferenceUpdateResult : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _imageIdMapEntrys;
    GEORPPhotoAttributionPreferencesUpdateResult * _photoAttributionPreferencesUpdateResult;
    GEORPRapProfileInfo * _rapInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPTdmFraudRequestInfo * _tdmFraudRequestInfo;
    GEORPThirdPartyPhotoSharingPreferenceUpdateResult * _thirdPartyPhotoSharingPreferenceUpdateResult;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *feedbackId;
@property (nonatomic, readonly) bool hasFeedbackId;
@property (nonatomic, readonly) bool hasPhotoAttributionPreferencesUpdateResult;
@property (nonatomic, readonly) bool hasRapInfo;
@property (nonatomic, readonly) bool hasTdmFraudRequestInfo;
@property (nonatomic, readonly) bool hasThirdPartyPhotoSharingPreferenceUpdateResult;
@property (nonatomic, retain) NSMutableArray *imageIdMapEntrys;
@property (nonatomic, retain) GEORPPhotoAttributionPreferencesUpdateResult *photoAttributionPreferencesUpdateResult;
@property (nonatomic, retain) GEORPRapProfileInfo *rapInfo;
@property (nonatomic, retain) GEORPTdmFraudRequestInfo *tdmFraudRequestInfo;
@property (nonatomic, retain) GEORPThirdPartyPhotoSharingPreferenceUpdateResult *thirdPartyPhotoSharingPreferenceUpdateResult;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageIdMapEntryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImageIdMapEntry:(id)arg1;
- (void)clearImageIdMapEntrys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackId;
- (bool)hasFeedbackId;
- (bool)hasPhotoAttributionPreferencesUpdateResult;
- (bool)hasRapInfo;
- (bool)hasTdmFraudRequestInfo;
- (bool)hasThirdPartyPhotoSharingPreferenceUpdateResult;
- (unsigned long long)hash;
- (id)imageIdMapEntryAtIndex:(unsigned long long)arg1;
- (id)imageIdMapEntrys;
- (unsigned long long)imageIdMapEntrysCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photoAttributionPreferencesUpdateResult;
- (id)rapInfo;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackId:(id)arg1;
- (void)setImageIdMapEntrys:(id)arg1;
- (void)setPhotoAttributionPreferencesUpdateResult:(id)arg1;
- (void)setRapInfo:(id)arg1;
- (void)setTdmFraudRequestInfo:(id)arg1;
- (void)setThirdPartyPhotoSharingPreferenceUpdateResult:(id)arg1;
- (id)tdmFraudRequestInfo;
- (id)thirdPartyPhotoSharingPreferenceUpdateResult;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
