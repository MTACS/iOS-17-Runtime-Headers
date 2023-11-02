
@interface BMPBHomeKitClientBase : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _clientName;
    double  _duration;
    NSString * _eventCorrelationIdentifier;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int duration : 1; 
        unsigned int homeOccupancy : 1; 
    }  _has;
    int  _homeOccupancy;
    NSString * _homeUniqueIdentifier;
    NSString * _source;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *eventCorrelationIdentifier;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasClientName;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasEventCorrelationIdentifier;
@property (nonatomic) bool hasHomeOccupancy;
@property (nonatomic, readonly) bool hasHomeUniqueIdentifier;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) int homeOccupancy;
@property (nonatomic, retain) NSString *homeUniqueIdentifier;
@property (nonatomic, retain) NSString *source;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)clientName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)eventCorrelationIdentifier;
- (bool)hasAbsoluteTimestamp;
- (bool)hasClientName;
- (bool)hasDuration;
- (bool)hasEventCorrelationIdentifier;
- (bool)hasHomeOccupancy;
- (bool)hasHomeUniqueIdentifier;
- (bool)hasSource;
- (unsigned long long)hash;
- (int)homeOccupancy;
- (id)homeUniqueIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setClientName:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventCorrelationIdentifier:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHomeOccupancy:(bool)arg1;
- (void)setHomeOccupancy:(int)arg1;
- (void)setHomeUniqueIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
