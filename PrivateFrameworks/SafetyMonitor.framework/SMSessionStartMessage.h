
@interface SMSessionStartMessage : SMMessage {
    NSDate * _coarseEstimatedEndTime;
    NSData * _destinationMapItem;
    unsigned long long  _destinationType;
    NSDate * _estimatedEndTime;
    NSDictionary * _invitationTokenDict;
    unsigned long long  _sessionType;
}

@property (nonatomic, readonly) NSDate *coarseEstimatedEndTime;
@property (nonatomic, readonly) NSData *destinationMapItem;
@property (nonatomic, readonly) unsigned long long destinationType;
@property (nonatomic, readonly) NSDate *estimatedEndTime;
@property (nonatomic, readonly) NSDictionary *invitationTokenDict;
@property (nonatomic, readonly) unsigned long long sessionType;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)coarseEstimatedEndTime;
- (id)destinationMapItem;
- (unsigned long long)destinationType;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedEndTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 invitationToken:(id)arg4 sessionType:(unsigned long long)arg5 estimatedEndTime:(id)arg6 coarseEstimatedEndTime:(id)arg7 destinationType:(unsigned long long)arg8 destinationMapItem:(id)arg9;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 invitationTokenDict:(id)arg4 sessionType:(unsigned long long)arg5 estimatedEndTime:(id)arg6 coarseEstimatedEndTime:(id)arg7 destinationType:(unsigned long long)arg8 destinationMapItem:(id)arg9;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1 invitationTokenDict:(id)arg2 sessionType:(unsigned long long)arg3 estimatedEndTime:(id)arg4 coarseEstimatedEndTime:(id)arg5 destinationType:(unsigned long long)arg6 destinationMapItem:(id)arg7;
- (id)initWithURL:(id)arg1;
- (id)invitationTokenDict;
- (id)outputToDictionary;
- (id)outputToURLComponents;
- (unsigned long long)sessionType;
- (id)summaryText;

@end
