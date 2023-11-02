
@interface SMEmergencyContactsNotifiedSyncMessage : SMMessage {
    unsigned long long  _triggerCategory;
}

@property (nonatomic, readonly) unsigned long long triggerCategory;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 triggerCategory:(unsigned long long)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1 triggerCategory:(unsigned long long)arg2;
- (id)outputToDictionary;
- (unsigned long long)triggerCategory;

@end
