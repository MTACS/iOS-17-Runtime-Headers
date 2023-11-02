
@interface GEOClickableAdvisory : PBCodable <NSCopying> {
    GEOFormattedString * _advisoryMessage;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_incidentIndexs : 1; 
        unsigned int read_advisoryMessage : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentIndexs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *advisoryMessage;
@property (nonatomic, readonly) bool hasAdvisoryMessage;
@property (nonatomic, readonly) unsigned int*incidentIndexs;
@property (nonatomic, readonly) unsigned long long incidentIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addIncidentIndex:(unsigned int)arg1;
- (id)advisoryMessage;
- (void)clearIncidentIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdvisoryMessage;
- (unsigned long long)hash;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentIndexs;
- (unsigned long long)incidentIndexsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdvisoryMessage:(id)arg1;
- (void)setIncidentIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
