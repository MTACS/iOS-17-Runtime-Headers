
@interface GEOPDAmenityValue : PBCodable <NSCopying> {
    NSString * _amenityId;
    bool  _amenityPresent;
    int  _amenityType;
    struct { 
        unsigned int has_amenityType : 1; 
        unsigned int has_amenityPresent : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_amenityId : 1; 
        unsigned int read_names : 1; 
        unsigned int read_symbolImageName : 1; 
        unsigned int read_vendorId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _names;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _symbolImageName;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

@property (nonatomic, retain) NSString *amenityId;
@property (nonatomic) bool amenityPresent;
@property (nonatomic) int amenityType;
@property (nonatomic, readonly) bool hasAmenityId;
@property (nonatomic) bool hasAmenityPresent;
@property (nonatomic) bool hasAmenityType;
@property (nonatomic, readonly) bool hasSymbolImageName;
@property (nonatomic, readonly) bool hasVendorId;
@property (nonatomic, retain) NSMutableArray *names;
@property (nonatomic, retain) NSString *symbolImageName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vendorId;

+ (bool)isValid:(id)arg1;
+ (Class)nameType;

- (void).cxx_destruct;
- (int)StringAsAmenityType:(id)arg1;
- (void)addName:(id)arg1;
- (id)amenityId;
- (bool)amenityPresent;
- (int)amenityType;
- (id)amenityTypeAsString:(int)arg1;
- (void)clearNames;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayTitle;
- (bool)hasAmenityId;
- (bool)hasAmenityPresent;
- (bool)hasAmenityType;
- (bool)hasSymbolImageName;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)names;
- (unsigned long long)namesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmenityId:(id)arg1;
- (void)setAmenityPresent:(bool)arg1;
- (void)setAmenityType:(int)arg1;
- (void)setHasAmenityPresent:(bool)arg1;
- (void)setHasAmenityType:(bool)arg1;
- (void)setNames:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)symbolImageName;
- (id)unknownFields;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end
