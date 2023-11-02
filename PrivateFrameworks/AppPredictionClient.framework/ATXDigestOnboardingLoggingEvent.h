
@interface ATXDigestOnboardingLoggingEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSArray * _deliveryTimes;
    bool  _didSelectShowMore;
    int  _digestOnboardingOutcome;
    int  _entrySource;
    int  _finalUIShown;
    NSUUID * _sessionUUID;
    double  _timeTaken;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *deliveryTimes;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didSelectShowMore;
@property (nonatomic, readonly) int digestOnboardingOutcome;
@property (nonatomic, readonly) int entrySource;
@property (nonatomic, readonly) int finalUIShown;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeTaken;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)deliveryTimes;
- (bool)didSelectShowMore;
- (int)digestOnboardingOutcome;
- (id)encodeAsProto;
- (int)entrySource;
- (int)finalUIShown;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 entrySource:(int)arg2 digestOnboardingOutcome:(int)arg3 finalUIShown:(int)arg4 didSelectShowMore:(bool)arg5 timeTaken:(double)arg6 deliveryTimes:(id)arg7;
- (id)proto;
- (id)serialize;
- (id)sessionUUID;
- (double)timeTaken;

@end
