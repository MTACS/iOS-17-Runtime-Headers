
@interface AMSXDMessage : NSObject <NSCopying, NSSecureCoding> {
    AMSXDDevice * _destination;
    double  _expirationInterval;
    NSString * _identifier;
    bool  _isReply;
    NSString * _logKey;
    NSString * _messageID;
    <NSObject><NSSecureCoding> * _object;
    NSString * _objectClassName;
    AMSXDDevice * _origin;
    long long  _purpose;
    NSDate * _receiptDate;
}

@property (nonatomic, readonly) NSDictionary *JSONDictionary;
@property (nonatomic, retain) AMSXDDevice *destination;
@property (nonatomic) double expirationInterval;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isReply;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *messageID;
@property (nonatomic, retain) <NSObject><NSSecureCoding> *object;
@property (nonatomic, retain) NSString *objectClassName;
@property (nonatomic, retain) AMSXDDevice *origin;
@property (nonatomic) long long purpose;
@property (nonatomic, retain) NSDate *receiptDate;

+ (id)_allowedClassNamesForDecoding;
+ (id)_allowedClassesForDecoding;
+ (id)messageFromProtoMessage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtoMessage;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (double)expirationInterval;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1;
- (bool)isExpired;
- (bool)isReply;
- (id)logKey;
- (id)messageID;
- (id)object;
- (id)objectClassName;
- (id)origin;
- (long long)purpose;
- (id)receiptDate;
- (void)setDestination:(id)arg1;
- (void)setExpirationInterval:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setObjectClassName:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPurpose:(long long)arg1;
- (void)setReceiptDate:(id)arg1;

@end
