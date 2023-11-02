
@interface SMSessionStateUpdateReqMessage : SMMessage {
    NSUUID * _deviceToRequest;
}

@property (nonatomic, readonly) NSUUID *deviceToRequest;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceToRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initSessionID:(id)arg1 deviceToRequest:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 deviceToRequest:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)outputToDictionary;

@end
