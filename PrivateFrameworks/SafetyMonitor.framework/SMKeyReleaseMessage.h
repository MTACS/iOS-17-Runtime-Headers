
@interface SMKeyReleaseMessage : SMMessage {
    unsigned long long  _destinationType;
    bool  _isSOSTrigger;
    RTLocation * _locationOfTrigger;
    NSData * _safetyCacheKey;
    NSData * _safetyCacheToken;
    unsigned long long  _sessionType;
    NSDate * _triggerDate;
    unsigned long long  _triggerType;
}

@property (nonatomic, readonly) unsigned long long destinationType;
@property (nonatomic, readonly) bool isSOSTrigger;
@property (nonatomic, readonly) RTLocation *locationOfTrigger;
@property (nonatomic, readonly) NSData *safetyCacheKey;
@property (nonatomic, readonly) NSData *safetyCacheToken;
@property (nonatomic, readonly) unsigned long long sessionType;
@property (nonatomic, readonly) NSDate *triggerDate;
@property (nonatomic, readonly) unsigned long long triggerType;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)destinationType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3 triggerDate:(id)arg4 locationOfTrigger:(id)arg5 triggerType:(unsigned long long)arg6 safetyCacheKey:(id)arg7 safetyCacheToken:(id)arg8 sessionType:(unsigned long long)arg9 destinationType:(unsigned long long)arg10 isSOSTrigger:(bool)arg11;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1 triggerDate:(id)arg2 locationOfTrigger:(id)arg3 triggerType:(unsigned long long)arg4 safetyCacheKey:(id)arg5 safetyCacheToken:(id)arg6 sessionType:(unsigned long long)arg7 destinationType:(unsigned long long)arg8;
- (id)initWithSessionID:(id)arg1 triggerDate:(id)arg2 locationOfTrigger:(id)arg3 triggerType:(unsigned long long)arg4 safetyCacheKey:(id)arg5 safetyCacheToken:(id)arg6 sessionType:(unsigned long long)arg7 destinationType:(unsigned long long)arg8 isSOSTrigger:(bool)arg9;
- (id)initWithURL:(id)arg1;
- (bool)isSOSTrigger;
- (id)locationOfTrigger;
- (id)outputToDictionary;
- (id)outputToURLComponents;
- (id)safetyCacheKey;
- (id)safetyCacheToken;
- (unsigned long long)sessionType;
- (id)summaryText;
- (id)triggerDate;
- (unsigned long long)triggerType;

@end
