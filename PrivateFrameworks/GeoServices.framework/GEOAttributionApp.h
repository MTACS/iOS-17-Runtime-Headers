
@interface GEOAttributionApp : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    struct { 
        unsigned int has_restaurantReservationExtensionSupport : 1; 
        unsigned int has_supportsRestaurantQueueing : 1; 
        unsigned int has_supportsRestaurantReservations : 1; 
        unsigned int read_appBundleIdentifier : 1; 
        unsigned int read_handledSchemes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _handledSchemes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _restaurantReservationExtensionSupport;
    bool  _supportsRestaurantQueueing;
    bool  _supportsRestaurantReservations;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *handledSchemes;
@property (nonatomic) bool hasRestaurantReservationExtensionSupport;
@property (nonatomic) bool hasSupportsRestaurantQueueing;
@property (nonatomic) bool hasSupportsRestaurantReservations;
@property (nonatomic) int restaurantReservationExtensionSupport;
@property (nonatomic) bool supportsRestaurantQueueing;
@property (nonatomic) bool supportsRestaurantReservations;

+ (Class)handledSchemesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (void)addHandledSchemes:(id)arg1;
- (id)appBundleIdentifier;
- (void)clearHandledSchemes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handledSchemes;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (bool)hasRestaurantReservationExtensionSupport;
- (bool)hasSupportsRestaurantQueueing;
- (bool)hasSupportsRestaurantReservations;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)restaurantReservationExtensionSupport;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setHandledSchemes:(id)arg1;
- (void)setHasRestaurantReservationExtensionSupport:(bool)arg1;
- (void)setHasSupportsRestaurantQueueing:(bool)arg1;
- (void)setHasSupportsRestaurantReservations:(bool)arg1;
- (void)setRestaurantReservationExtensionSupport:(int)arg1;
- (void)setSupportsRestaurantQueueing:(bool)arg1;
- (void)setSupportsRestaurantReservations:(bool)arg1;
- (bool)supportsRestaurantQueueing;
- (bool)supportsRestaurantReservations;
- (void)writeTo:(id)arg1;

@end
