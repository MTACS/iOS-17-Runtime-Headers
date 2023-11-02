
@interface GEOLogMsgStateExtension : PBCodable <NSCopying> {
    struct { 
        unsigned int has_hasRideBookingAppEnabled : 1; 
        unsigned int has_hasRideBookingAppInstalled : 1; 
        unsigned int has_hasTableBookingAppEnabled : 1; 
        unsigned int has_hasTableBookingAppInstalled : 1; 
    }  _flags;
    bool  _hasRideBookingAppEnabled;
    bool  _hasRideBookingAppInstalled;
    bool  _hasTableBookingAppEnabled;
    bool  _hasTableBookingAppInstalled;
}

@property (nonatomic) bool hasHasRideBookingAppEnabled;
@property (nonatomic) bool hasHasRideBookingAppInstalled;
@property (nonatomic) bool hasHasTableBookingAppEnabled;
@property (nonatomic) bool hasHasTableBookingAppInstalled;
@property (nonatomic) bool hasRideBookingAppEnabled;
@property (nonatomic) bool hasRideBookingAppInstalled;
@property (nonatomic) bool hasTableBookingAppEnabled;
@property (nonatomic) bool hasTableBookingAppInstalled;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasRideBookingAppEnabled;
- (bool)hasHasRideBookingAppInstalled;
- (bool)hasHasTableBookingAppEnabled;
- (bool)hasHasTableBookingAppInstalled;
- (bool)hasRideBookingAppEnabled;
- (bool)hasRideBookingAppInstalled;
- (bool)hasTableBookingAppEnabled;
- (bool)hasTableBookingAppInstalled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHasRideBookingAppEnabled:(bool)arg1;
- (void)setHasHasRideBookingAppInstalled:(bool)arg1;
- (void)setHasHasTableBookingAppEnabled:(bool)arg1;
- (void)setHasHasTableBookingAppInstalled:(bool)arg1;
- (void)setHasRideBookingAppEnabled:(bool)arg1;
- (void)setHasRideBookingAppInstalled:(bool)arg1;
- (void)setHasTableBookingAppEnabled:(bool)arg1;
- (void)setHasTableBookingAppInstalled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
