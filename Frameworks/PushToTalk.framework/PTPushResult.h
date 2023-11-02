
@interface PTPushResult : NSObject {
    PTParticipant * _participant;
    long long  _type;
}

@property (nonatomic, retain) PTParticipant *participant;
@property (nonatomic, readonly) long long type;

+ (id)leaveChannelPushResult;
+ (id)pushResultForActiveRemoteParticipant:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithResultType:(long long)arg1 participant:(id)arg2;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (long long)type;

@end
