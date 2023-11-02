
@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assistantId;
    NSData * _contextData;
    long long  _contextDataType;
    unsigned long long  _deliveryStream;
    NSString * _speechId;
    unsigned long long  _timestamp;
    long long  _type;
}

@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, readonly, copy) NSData *contextData;
@property (nonatomic, readonly) long long contextDataType;
@property (nonatomic, readonly) unsigned long long deliveryStream;
@property (nonatomic, copy) NSString *speechId;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long type;

+ (id)eventsReferenceTime;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantId;
- (id)contextData;
- (id)contextDataAsDictionary;
- (id)contextDataAsProtobuf;
- (long long)contextDataType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateStamp;
- (unsigned long long)deliveryStream;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)legacyTypeName;
- (void)setAssistantId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)speechId;
- (unsigned long long)timestamp;
- (long long)type;
- (id)typeName;

@end
