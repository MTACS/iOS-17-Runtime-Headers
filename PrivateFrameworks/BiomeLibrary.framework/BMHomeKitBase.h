
@interface BMHomeKitBase : BMEventBase <BMStoreData> {
    NSString * _clientName;
    double  _duration;
    NSString * _eventCorrelationIdentifier;
    bool  _hasDuration;
    bool  _hasHomeOccupancy;
    bool  _hasRaw_absoluteTimestamp;
    int  _homeOccupancy;
    NSString * _homeUniqueIdentifier;
    double  _raw_absoluteTimestamp;
    NSString * _source;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *eventCorrelationIdentifier;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasHomeOccupancy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int homeOccupancy;
@property (nonatomic, readonly) NSString *homeUniqueIdentifier;
@property (nonatomic, readonly) NSString *source;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)clientName;
- (unsigned int)dataVersion;
- (id)description;
- (double)duration;
- (id)eventCorrelationIdentifier;
- (bool)hasDuration;
- (bool)hasHomeOccupancy;
- (int)homeOccupancy;
- (id)homeUniqueIdentifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 duration:(id)arg2 homeUniqueIdentifier:(id)arg3 homeOccupancy:(id)arg4 source:(id)arg5 clientName:(id)arg6 eventCorrelationIdentifier:(id)arg7;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHomeOccupancy:(bool)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
