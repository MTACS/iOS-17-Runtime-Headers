
@interface BMSiriUIEvent : BMEventBase <BMEventBinaryStepping, BMProtoBufWrapper, BMStoreData> {
    NSString * _UUID;
    double  _absoluteTimestamp;
    NSString * _dismissalReason;
    NSString * _sessionID;
    bool  _starting;
    NSString * _viewMode;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *dismissalReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *viewMode;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)UUID;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (id)dismissalReason;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSessionID:(id)arg1 UUID:(id)arg2 viewMode:(id)arg3 dismissalReason:(id)arg4 starting:(bool)arg5 absoluteTimeStamp:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isStarting;
- (id)proto;
- (id)serialize;
- (id)sessionID;
- (void)setStarting:(bool)arg1;
- (id)viewMode;

@end
