
@interface GEOPBTransitIncident : PBCodable <NSCopying> {
    NSMutableArray * _affectedEntitys;
    bool  _blocking;
    unsigned int  _creationDatetime;
    unsigned int  _endDatetime;
    struct { 
        unsigned int has_incidentMuid : 1; 
        unsigned int has_creationDatetime : 1; 
        unsigned int has_endDatetime : 1; 
        unsigned int has_iconEnum : 1; 
        unsigned int has_incidentIndex : 1; 
        unsigned int has_startDatetime : 1; 
        unsigned int has_updatedDatetime : 1; 
        unsigned int has_blocking : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_affectedEntitys : 1; 
        unsigned int read_incidentTypeArtwork : 1; 
        unsigned int read_longDescriptionString : 1; 
        unsigned int read_messageForAllBlocking : 1; 
        unsigned int read_messageForIncidentType : 1; 
        unsigned int read_messageString : 1; 
        unsigned int read_shortDescriptionString : 1; 
        unsigned int read_titleString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _iconEnum;
    unsigned int  _incidentIndex;
    unsigned long long  _incidentMuid;
    GEOPBTransitArtwork * _incidentTypeArtwork;
    NSString * _longDescriptionString;
    NSString * _messageForAllBlocking;
    NSString * _messageForIncidentType;
    NSString * _messageString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _shortDescriptionString;
    unsigned int  _startDatetime;
    NSString * _titleString;
    PBUnknownFields * _unknownFields;
    unsigned int  _updatedDatetime;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
