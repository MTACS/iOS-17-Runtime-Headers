
@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {
    GEOPBTransitArtwork * _artwork;
    NSMutableArray * _continueCommands;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_continueCommands : 1; 
        unsigned int read_mergeCommands : 1; 
        unsigned int read_normalCommands : 1; 
        unsigned int read_title : 1; 
        unsigned int read_waypointInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _mergeCommands;
    NSMutableArray * _normalCommands;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _title;
    PBUnknownFields * _unknownFields;
    GEOFormattedString * _waypointInfo;
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
