
@interface SMSessionStartInfoRequestMessage : SMMessage {
    NSString * _receiverHandle;
}

@property (nonatomic, readonly) NSString *receiverHandle;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 receiverHandle:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1 receiverHandle:(id)arg2;
- (id)outputToDictionary;
- (id)receiverHandle;

@end
