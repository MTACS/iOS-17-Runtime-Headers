
@interface EMBiomeEvent : NSObject <BMStoreData, EFLoggable, NSSecureCoding> {
    unsigned int  _dataVersion;
    NSString * _eventName;
    NSString * _messageId;
    NSDictionary * _payload;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageId;
@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventName:(id)arg1 messageId:(id)arg2 payload:(id)arg3;
- (id)json;
- (id)messageId;
- (id)payload;
- (id)serialize;

@end
