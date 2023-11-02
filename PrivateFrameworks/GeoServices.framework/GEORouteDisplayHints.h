
@interface GEORouteDisplayHints : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _availablePaymentTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _availablePrioritizations;
    struct { 
        unsigned int has_showTransitSchedules : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_availablePaymentTypes : 1; 
        unsigned int read_availablePrioritizations : 1; 
        unsigned int read_transitSurchargeOptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _showTransitSchedules;
    GEORequestOptions * _transitSurchargeOptions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*availablePaymentTypes;
@property (nonatomic, readonly) unsigned long long availablePaymentTypesCount;
@property (nonatomic, readonly) int*availablePrioritizations;
@property (nonatomic, readonly) unsigned long long availablePrioritizationsCount;
@property (nonatomic) bool hasShowTransitSchedules;
@property (nonatomic, readonly) bool hasTransitSurchargeOptions;
@property (nonatomic, readonly) NSArray *prioritizationOptions;
@property (nonatomic) bool showTransitSchedules;
@property (nonatomic, readonly) <GEOSurchargeOption> *surchargeOptions;
@property (nonatomic, retain) GEORequestOptions *transitSurchargeOptions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (int)availablePaymentTypeAtIndex:(unsigned long long)arg1;
- (int*)availablePaymentTypes;
- (id)availablePaymentTypesAsString:(int)arg1;
- (unsigned long long)availablePaymentTypesCount;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (int*)availablePrioritizations;
- (id)availablePrioritizationsAsString:(int)arg1;
- (unsigned long long)availablePrioritizationsCount;
- (void)clearAvailablePaymentTypes;
- (void)clearAvailablePrioritizations;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShowTransitSchedules;
- (bool)hasTransitSurchargeOptions;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)prioritizationOptions;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvailablePaymentTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAvailablePrioritizations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasShowTransitSchedules:(bool)arg1;
- (void)setShowTransitSchedules:(bool)arg1;
- (void)setTransitSurchargeOptions:(id)arg1;
- (bool)showTransitSchedules;
- (id)surchargeOptions;
- (id)transitSurchargeOptions;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
