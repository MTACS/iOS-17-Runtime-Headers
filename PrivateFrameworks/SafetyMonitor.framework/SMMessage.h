
@interface SMMessage : NSObject <NSSecureCoding> {
    NSDate * _date;
    long long  _interfaceVersion;
    NSUUID * _messageID;
    NSUUID * _sessionID;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly) long long interfaceVersion;
@property (nonatomic, readonly) NSUUID *messageID;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) NSString *summaryText;

+ (id)createMessageFromDict:(id)arg1;
+ (id)createMessageFromURL:(id)arg1;
+ (unsigned long long)interfaceTypeFromMessageType:(unsigned long long)arg1;
+ (id)messageIDFromDict:(id)arg1;
+ (id)messageIDFromURL:(id)arg1;
+ (unsigned long long)messageType;
+ (unsigned long long)messageTypeFromDict:(id)arg1;
+ (unsigned long long)messageTypeFromURL:(id)arg1;
+ (id)sessionIDFromDict:(id)arg1;
+ (id)sessionIDFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionID:(id)arg1;
- (id)initWithURL:(id)arg1;
- (long long)interfaceVersion;
- (id)messageID;
- (id)outputToDictionary;
- (id)outputToURLComponents;
- (id)sessionID;
- (void)setDate:(id)arg1;
- (id)summaryText;

@end
