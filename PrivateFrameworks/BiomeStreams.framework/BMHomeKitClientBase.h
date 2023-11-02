
@interface BMHomeKitClientBase : NSObject <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _clientName;
    NSDateInterval * _dateInterval;
    double  _duration;
    NSString * _eventCorrelationIdentifier;
    int  _homeOccupancy;
    NSString * _homeUniqueIdentifier;
    NSString * _source;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *eventCorrelationIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int homeOccupancy;
@property (nonatomic, readonly, copy) NSString *homeUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)clientName;
- (unsigned int)dataVersion;
- (id)dateInterval;
- (id)description;
- (double)duration;
- (id)encodeAsProto;
- (id)eventCorrelationIdentifier;
- (int)homeOccupancy;
- (id)homeUniqueIdentifier;
- (id)initWithDateInterval:(id)arg1 homeUniqueIdentifier:(id)arg2 homeOccupancy:(int)arg3 source:(id)arg4 clientName:(id)arg5 eventCorrelationIdentifier:(id)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (id)source;

@end
