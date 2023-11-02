
@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lineID : 1; 
        unsigned int has_scheduledArrival : 1; 
        unsigned int has_scheduledDeparture : 1; 
        unsigned int read_stopFrom : 1; 
        unsigned int read_stopTo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _lineID;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _scheduledArrival;
    double  _scheduledDeparture;
    GEONavigationTransitStopSummary * _stopFrom;
    GEONavigationTransitStopSummary * _stopTo;
}

@property (nonatomic) bool hasLineID;
@property (nonatomic) bool hasScheduledArrival;
@property (nonatomic) bool hasScheduledDeparture;
@property (nonatomic, readonly) bool hasStopFrom;
@property (nonatomic, readonly) bool hasStopTo;
@property (nonatomic) unsigned long long lineID;
@property (nonatomic) double scheduledArrival;
@property (nonatomic) double scheduledDeparture;
@property (nonatomic, retain) GEONavigationTransitStopSummary *stopFrom;
@property (nonatomic, retain) GEONavigationTransitStopSummary *stopTo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLineID;
- (bool)hasScheduledArrival;
- (bool)hasScheduledDeparture;
- (bool)hasStopFrom;
- (bool)hasStopTo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)lineID;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)scheduledArrival;
- (double)scheduledDeparture;
- (void)setHasLineID:(bool)arg1;
- (void)setHasScheduledArrival:(bool)arg1;
- (void)setHasScheduledDeparture:(bool)arg1;
- (void)setLineID:(unsigned long long)arg1;
- (void)setScheduledArrival:(double)arg1;
- (void)setScheduledDeparture:(double)arg1;
- (void)setStopFrom:(id)arg1;
- (void)setStopTo:(id)arg1;
- (id)stopFrom;
- (id)stopTo;
- (void)writeTo:(id)arg1;

@end
