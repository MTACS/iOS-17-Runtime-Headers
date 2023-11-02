
@interface SMSessionEndMessage : SMMessage {
    NSData * _destinationMapItem;
    unsigned long long  _destinationType;
    unsigned long long  _sessionEndReason;
    unsigned long long  _sessionType;
}

@property (nonatomic, readonly) NSData *destinationMapItem;
@property (nonatomic, readonly) unsigned long long destinationType;
@property (nonatomic, readonly) unsigned long long sessionEndReason;
@property (nonatomic, readonly) unsigned long long sessionType;

+ (unsigned long long)messageType;
+ (unsigned long long)sessionEndReasonFromDict:(id)arg1;
+ (unsigned long long)sessionEndReasonFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationMapItem;
- (unsigned long long)destinationType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 sessionEndReason:(unsigned long long)arg4;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 sessionEndReason:(unsigned long long)arg4 sessionType:(unsigned long long)arg5 destinationType:(unsigned long long)arg6;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 sessionEndReason:(unsigned long long)arg4 sessionType:(unsigned long long)arg5 destinationType:(unsigned long long)arg6 destinationMapItem:(id)arg7;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1 sessionEndReason:(unsigned long long)arg2 sessionType:(unsigned long long)arg3 destinationType:(unsigned long long)arg4 destinationMapItem:(id)arg5;
- (id)initWithURL:(id)arg1;
- (id)outputToDictionary;
- (id)outputToURLComponents;
- (unsigned long long)sessionEndReason;
- (unsigned long long)sessionType;
- (id)summaryText;

@end
