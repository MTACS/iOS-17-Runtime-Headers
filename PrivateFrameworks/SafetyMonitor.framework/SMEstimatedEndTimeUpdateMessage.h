
@interface SMEstimatedEndTimeUpdateMessage : SMMessage {
    NSDate * _coarseEstimatedEndTime;
    NSDate * _estimatedEndTime;
}

@property (nonatomic, readonly) NSDate *coarseEstimatedEndTime;
@property (nonatomic, readonly) NSDate *estimatedEndTime;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)coarseEstimatedEndTime;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedEndTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 estimatedEndTime:(id)arg4;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 estimatedEndTime:(id)arg4 coarseEstimatedEndTime:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1 estimatedEndTime:(id)arg2 coarseEstimatedEndTime:(id)arg3;
- (id)outputToDictionary;

@end
