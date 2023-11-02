
@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {
    NSMutableArray * _externalTransitStationCodes;
    struct { 
        unsigned int has_transactionTimestamp : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_externalTransitStationCodes : 1; 
        unsigned int read_sourceId : 1; 
        unsigned int read_transactionLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceId;
    GEOLocation * _transactionLocation;
    double  _transactionTimestamp;
    PBUnknownFields * _unknownFields;
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
