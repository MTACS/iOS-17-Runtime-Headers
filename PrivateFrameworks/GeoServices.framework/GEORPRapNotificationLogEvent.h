
@interface GEORPRapNotificationLogEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int has_userInteractedWithNotification : 1; 
        unsigned int has_userShownNotification : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_originalRapId : 1; 
        unsigned int read_responseId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _originalRapId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _responseId;
    PBUnknownFields * _unknownFields;
    bool  _userInteractedWithNotification;
    bool  _userShownNotification;
}

@property (nonatomic, readonly) bool hasOriginalRapId;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic) bool hasUserInteractedWithNotification;
@property (nonatomic) bool hasUserShownNotification;
@property (nonatomic, retain) NSString *originalRapId;
@property (nonatomic, retain) NSString *responseId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool userInteractedWithNotification;
@property (nonatomic) bool userShownNotification;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginalRapId;
- (bool)hasResponseId;
- (bool)hasUserInteractedWithNotification;
- (bool)hasUserShownNotification;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalRapId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseId;
- (void)setHasUserInteractedWithNotification:(bool)arg1;
- (void)setHasUserShownNotification:(bool)arg1;
- (void)setOriginalRapId:(id)arg1;
- (void)setResponseId:(id)arg1;
- (void)setUserInteractedWithNotification:(bool)arg1;
- (void)setUserShownNotification:(bool)arg1;
- (id)unknownFields;
- (bool)userInteractedWithNotification;
- (bool)userShownNotification;
- (void)writeTo:(id)arg1;

@end
