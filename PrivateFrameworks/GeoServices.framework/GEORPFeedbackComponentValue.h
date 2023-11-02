
@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {
    GEORPFeedbackConversation * _conversation;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_conversation : 1; 
        unsigned int read_notification : 1; 
        unsigned int read_overview : 1; 
        unsigned int read_photoAttributionPreferences : 1; 
        unsigned int read_poiEnrichment : 1; 
        unsigned int read_rapInfo : 1; 
        unsigned int read_thirdPartyPhotoSharingPreferences : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPFeedbackNotification * _notification;
    GEORPFeedbackOverview * _overview;
    GEORPPhotoAttributionPreferences * _photoAttributionPreferences;
    GEORPPoiEnrichment * _poiEnrichment;
    GEORPRapInfo * _rapInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPThirdPartyPhotoSharingPreference * _thirdPartyPhotoSharingPreferences;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPFeedbackConversation *conversation;
@property (nonatomic, readonly) bool hasConversation;
@property (nonatomic, readonly) bool hasNotification;
@property (nonatomic, readonly) bool hasOverview;
@property (nonatomic, readonly) bool hasPhotoAttributionPreferences;
@property (nonatomic, readonly) bool hasPoiEnrichment;
@property (nonatomic, readonly) bool hasRapInfo;
@property (nonatomic, readonly) bool hasThirdPartyPhotoSharingPreferences;
@property (nonatomic, retain) GEORPFeedbackNotification *notification;
@property (nonatomic, retain) GEORPFeedbackOverview *overview;
@property (nonatomic, retain) GEORPPhotoAttributionPreferences *photoAttributionPreferences;
@property (nonatomic, retain) GEORPPoiEnrichment *poiEnrichment;
@property (nonatomic, retain) GEORPRapInfo *rapInfo;
@property (nonatomic, retain) GEORPThirdPartyPhotoSharingPreference *thirdPartyPhotoSharingPreferences;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)conversation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConversation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNotification;
- (bool)hasOverview;
- (bool)hasPhotoAttributionPreferences;
- (bool)hasPoiEnrichment;
- (bool)hasRapInfo;
- (bool)hasThirdPartyPhotoSharingPreferences;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)notification;
- (id)overview;
- (id)photoAttributionPreferences;
- (id)poiEnrichment;
- (id)rapInfo;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setOverview:(id)arg1;
- (void)setPhotoAttributionPreferences:(id)arg1;
- (void)setPoiEnrichment:(id)arg1;
- (void)setRapInfo:(id)arg1;
- (void)setThirdPartyPhotoSharingPreferences:(id)arg1;
- (id)thirdPartyPhotoSharingPreferences;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
