
@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_paths : 1; 
        unsigned int read_segmentName : 1; 
        unsigned int read_ticketingUrl : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _paths;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _segmentName;
    NSString * _ticketingUrl;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSegmentName;
@property (nonatomic, readonly) bool hasTicketingUrl;
@property (nonatomic, retain) NSMutableArray *paths;
@property (nonatomic, retain) NSString *segmentName;
@property (nonatomic, retain) NSString *ticketingUrl;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)pathType;

- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (void)clearPaths;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSegmentName;
- (bool)hasTicketingUrl;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)paths;
- (unsigned long long)pathsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)segmentName;
- (void)setPaths:(id)arg1;
- (void)setSegmentName:(id)arg1;
- (void)setTicketingUrl:(id)arg1;
- (id)ticketingUrl;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
