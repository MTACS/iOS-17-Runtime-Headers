
@interface GEOOriginalRouteLeg : PBCodable <NSCopying> {
    GEOWaypointInfo * _destinationWaypointInfo;
    GEOEVStateInfo * _evStateInfo;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_destinationWaypointInfo : 1; 
        unsigned int read_evStateInfo : 1; 
        unsigned int read_originWaypointInfo : 1; 
        unsigned int read_pathLeg : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOWaypointInfo * _originWaypointInfo;
    NSData * _pathLeg;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) GEOWaypointInfo *destinationWaypointInfo;
@property (nonatomic, retain) GEOEVStateInfo *evStateInfo;
@property (nonatomic, readonly) bool hasDestinationWaypointInfo;
@property (nonatomic, readonly) bool hasEvStateInfo;
@property (nonatomic, readonly) bool hasOriginWaypointInfo;
@property (nonatomic, readonly) bool hasPathLeg;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic, retain) GEOWaypointInfo *originWaypointInfo;
@property (nonatomic, retain) NSData *pathLeg;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSData *zilchPoints;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationWaypointInfo;
- (id)dictionaryRepresentation;
- (id)evStateInfo;
- (bool)hasDestinationWaypointInfo;
- (bool)hasEvStateInfo;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOriginWaypointInfo;
- (bool)hasPathLeg;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originWaypointInfo;
- (id)pathLeg;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationWaypointInfo:(id)arg1;
- (void)setEvStateInfo:(id)arg1;
- (void)setOriginWaypointInfo:(id)arg1;
- (void)setPathLeg:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
