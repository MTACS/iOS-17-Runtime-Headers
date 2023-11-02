
@interface GEOLPRLicensePlateRestrictionRules : PBCodable <NSCopying> {
    unsigned int  _createTime;
    struct { 
        unsigned int read_licensePlateRegions : 1; 
        unsigned int read_version : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _licensePlateRegions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _version;
}

@property (nonatomic) unsigned int createTime;
@property (nonatomic, retain) NSMutableArray *licensePlateRegions;
@property (nonatomic, retain) NSData *version;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;
+ (Class)licensePlateRegionType;

- (void).cxx_destruct;
- (void)addLicensePlateRegion:(id)arg1;
- (void)clearLicensePlateRegions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)createTime;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlateRegionAtIndex:(unsigned long long)arg1;
- (id)licensePlateRegions;
- (unsigned long long)licensePlateRegionsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreateTime:(unsigned int)arg1;
- (void)setLicensePlateRegions:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)plateRegionsContainingLatLngs:(id)arg1 inRadius:(double)arg2;

@end
