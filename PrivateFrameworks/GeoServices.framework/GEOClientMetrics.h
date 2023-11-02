
@interface GEOClientMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int has_queuedTime : 1; 
        unsigned int has_responseSource : 1; 
    }  _flags;
    GEOClientNetworkMetrics * _networkMetrics;
    double  _queuedTime;
    int  _responseSource;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasNetworkMetrics;
@property (nonatomic) bool hasQueuedTime;
@property (nonatomic) bool hasResponseSource;
@property (nonatomic, retain) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) double queuedTime;
@property (nonatomic) int responseSource;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsResponseSource:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNetworkMetrics;
- (bool)hasQueuedTime;
- (bool)hasResponseSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)networkMetrics;
- (double)queuedTime;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseSource;
- (id)responseSourceAsString:(int)arg1;
- (void)setHasQueuedTime:(bool)arg1;
- (void)setHasResponseSource:(bool)arg1;
- (void)setNetworkMetrics:(id)arg1;
- (void)setQueuedTime:(double)arg1;
- (void)setResponseSource:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
