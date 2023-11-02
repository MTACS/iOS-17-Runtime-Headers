
@interface SMSessionStateSyncMessage : SMMessage {
    SMSessionManagerState * _sessionManagerState;
}

@property (nonatomic, readonly) SMSessionManagerState *sessionManagerState;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionManagerState:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionManagerState:(id)arg1;
- (id)outputToDictionary;
- (id)sessionManagerState;

@end
