
@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding> {
    NSDateInterval * _dateInterval;
    unsigned long long  _tilesMissed;
    unsigned long long  _tilesPreloaded;
    unsigned long long  _tilesUsed;
    long long  _transportType;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic) unsigned long long tilesMissed;
@property (nonatomic) unsigned long long tilesPreloaded;
@property (nonatomic) unsigned long long tilesUsed;
@property (nonatomic) long long transportType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;
- (void)setTilesMissed:(unsigned long long)arg1;
- (void)setTilesPreloaded:(unsigned long long)arg1;
- (void)setTilesUsed:(unsigned long long)arg1;
- (void)setTransportType:(long long)arg1;
- (unsigned long long)tilesMissed;
- (unsigned long long)tilesPreloaded;
- (unsigned long long)tilesUsed;
- (long long)transportType;

@end
