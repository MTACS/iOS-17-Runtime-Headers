
@interface ATXDigestOnboardingSuggestionLoggingEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    int  _outcome;
    NSUUID * _sessionUUID;
    double  _timeToResolution;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int outcome;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeToResolution;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 outcome:(int)arg2 timeToResolution:(double)arg3;
- (int)outcome;
- (id)proto;
- (id)serialize;
- (id)sessionUUID;
- (double)timeToResolution;

@end
