
@interface BMTextInputSessionEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _bundleID;
    NSDateInterval * _dateInterval;
    double  _duration;
    NSString * _sessionID;
    unsigned long long  _sessionType;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)dateInterval;
- (id)description;
- (double)duration;
- (id)encodeAsProto;
- (id)initWithDateInterval:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 sessionType:(unsigned long long)arg4;
- (id)initWithDateInterval:(id)arg1 bundleID:(id)arg2 sessionType:(unsigned long long)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (id)sessionID;
- (unsigned long long)sessionType;
- (void)setBundleID:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
