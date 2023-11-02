
@interface GEOCompanionFerryStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {
    GEOPBTransitArtwork * _artworkOverride;
    struct { 
        unsigned int has_junctionType : 1; 
        unsigned int has_maneuverType : 1; 
        unsigned int read_junctionElements : 1; 
        unsigned int read_artworkOverride : 1; 
        unsigned int read_maneuverNames : 1; 
        unsigned int read_signposts : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _junctionElements;
    unsigned long long  _junctionElementsCount;
    unsigned long long  _junctionElementsSpace;
    int  _junctionType;
    NSMutableArray * _maneuverNames;
    int  _maneuverType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _signposts;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artworkOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArtworkOverride;
@property (nonatomic) bool hasJunctionType;
@property (nonatomic) bool hasManeuverType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*junctionElements;
@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *maneuverArtworkOverride;
@property (nonatomic, retain) NSMutableArray *maneuverNames;
@property (nonatomic) int maneuverType;
@property (nonatomic, retain) NSMutableArray *signposts;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;

+ (bool)isValid:(id)arg1;
+ (Class)maneuverNameType;
+ (Class)signpostType;

- (void).cxx_destruct;
- (int)StringAsJunctionType:(id)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addManeuverName:(id)arg1;
- (void)addSignpost:(id)arg1;
- (id)artworkOverride;
- (void)clearJunctionElements;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkOverride;
- (bool)hasJunctionType;
- (bool)hasManeuverType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })junctionElementAtIndex:(unsigned long long)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (unsigned long long)junctionElementsCount;
- (int)junctionType;
- (id)junctionTypeAsString:(int)arg1;
- (id)maneuverArtworkOverride;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (id)maneuverNames;
- (unsigned long long)maneuverNamesCount;
- (int)maneuverType;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtworkOverride:(id)arg1;
- (void)setHasJunctionType:(bool)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setJunctionType:(int)arg1;
- (void)setManeuverNames:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setSignposts:(id)arg1;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (id)signposts;
- (unsigned long long)signpostsCount;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
