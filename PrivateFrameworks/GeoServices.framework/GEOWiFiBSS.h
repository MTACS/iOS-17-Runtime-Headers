
@interface GEOWiFiBSS : PBCodable <NSCopying, NSSecureCoding, TBAccessPoint> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    struct { 
        unsigned int has_uniqueIdentifier : 1; 
        unsigned int read_attributes : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_latLngE7 : 1; 
        unsigned int read_location : 1; 
        unsigned int read_qualities : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    GEOLatLngE7 * _latLngE7;
    GEOLatLng * _location;
    NSMutableArray * _qualities;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *BSSID;
@property (getter=isTCPGood, nonatomic, readonly) bool TCPGood;
@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEdge, nonatomic, readonly) bool edge;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLatLngE7;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOLatLngE7 *latLngE7;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) <TBScore> *popularityScore;
@property (nonatomic, retain) NSMutableArray *qualities;
@property (nonatomic, readonly) <TBScore> *qualityScore;
@property (readonly) Class superclass;
@property (nonatomic) long long uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;
+ (Class)qualitiesType;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttributes:(int)arg1;
- (void)addQualities:(id)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearQualities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasLatLngE7;
- (bool)hasLocation;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)latLngE7;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (id)qualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasUniqueIdentifier:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatLngE7:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setQualities:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (long long)uniqueIdentifier;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

+ (bool)supportsSecureCoding;

- (id)BSSID;
- (bool)_hasAttribute:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)isEdge;
- (bool)isTCPGood;
- (double)latitude;
- (double)longitude;
- (id)popularityScore;
- (id)qualityScore;

@end
