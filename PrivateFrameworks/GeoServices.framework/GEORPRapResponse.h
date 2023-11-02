
@interface GEORPRapResponse : PBCodable <NSCopying> {
    GEORPDisplayDetails * _displayDetails;
    struct { 
        unsigned int has_rapStateIcon : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayDetails : 1; 
        unsigned int read_notification : 1; 
        unsigned int read_responseId : 1; 
        unsigned int read_userFormDetails : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPRapNotification * _notification;
    int  _rapStateIcon;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _responseId;
    PBUnknownFields * _unknownFields;
    GEORPUserFormDetails * _userFormDetails;
}

@property (nonatomic, retain) GEORPDisplayDetails *displayDetails;
@property (nonatomic, readonly) bool hasDisplayDetails;
@property (nonatomic, readonly) bool hasNotification;
@property (nonatomic) bool hasRapStateIcon;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic, readonly) bool hasUserFormDetails;
@property (nonatomic, retain) GEORPRapNotification *notification;
@property (nonatomic) int rapStateIcon;
@property (nonatomic, retain) NSString *responseId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEORPUserFormDetails *userFormDetails;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRapStateIcon:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayDetails;
- (bool)hasDisplayDetails;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNotification;
- (bool)hasRapStateIcon;
- (bool)hasResponseId;
- (bool)hasUserFormDetails;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)notification;
- (int)rapStateIcon;
- (id)rapStateIconAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseId;
- (void)setDisplayDetails:(id)arg1;
- (void)setHasRapStateIcon:(bool)arg1;
- (void)setNotification:(id)arg1;
- (void)setRapStateIcon:(int)arg1;
- (void)setResponseId:(id)arg1;
- (void)setUserFormDetails:(id)arg1;
- (id)unknownFields;
- (id)userFormDetails;
- (void)writeTo:(id)arg1;

@end
