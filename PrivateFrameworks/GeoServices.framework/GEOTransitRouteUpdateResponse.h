
@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying> {
    GEOPDDatasetABStatus * _datasetAbStatus;
    struct { 
        unsigned int has_timepointUsed : 1; 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_datasetAbStatus : 1; 
        unsigned int read_responseId : 1; 
        unsigned int read_routeUpdateConfiguration : 1; 
        unsigned int read_routeUpdates : 1; 
        unsigned int read_transitDataVersion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _responseId;
    GEOTransitRouteUpdateConfiguration * _routeUpdateConfiguration;
    NSMutableArray * _routeUpdates;
    int  _status;
    struct GEOTimepoint { 
        double _currentUserTime; 
        double _time; 
        int _type; 
        struct { 
            unsigned int currentUserTime : 1; 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _timepointUsed;
    NSString * _transitDataVersion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic, readonly) bool hasRouteUpdateConfiguration;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimepointUsed;
@property (nonatomic, readonly) bool hasTransitDataVersion;
@property (nonatomic, retain) NSData *responseId;
@property (nonatomic, retain) GEOTransitRouteUpdateConfiguration *routeUpdateConfiguration;
@property (nonatomic, retain) NSMutableArray *routeUpdates;
@property (nonatomic) int status;
@property (nonatomic) struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } timepointUsed;
@property (nonatomic, retain) NSString *transitDataVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)routeUpdateType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addRouteUpdate:(id)arg1;
- (void)clearRouteUpdates;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatasetAbStatus;
- (bool)hasResponseId;
- (bool)hasRouteUpdateConfiguration;
- (bool)hasStatus;
- (bool)hasTimepointUsed;
- (bool)hasTransitDataVersion;
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
- (id)responseId;
- (id)routeUpdateAtIndex:(unsigned long long)arg1;
- (id)routeUpdateConfiguration;
- (id)routeUpdates;
- (unsigned long long)routeUpdatesCount;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimepointUsed:(bool)arg1;
- (void)setResponseId:(id)arg1;
- (void)setRouteUpdateConfiguration:(id)arg1;
- (void)setRouteUpdates:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimepointUsed:(struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setTransitDataVersion:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (struct GEOTimepoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })timepointUsed;
- (id)transitDataVersion;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
