
@interface HKNotificationInstructionDiagnosticDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _action;
    NSString * _categoryIdentifier;
    NSString * _clientIdentifier;
    NSString * _creationDate;
    NSString * _criteria;
    NSString * _expirationDate;
    NSString * _isInvalid;
    NSString * _messageIdentifier;
    NSString * _modificationDate;
    NSString * _receivedDate;
    NSString * _sendingDeviceInfo;
    NSString * _sendingDeviceName;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *creationDate;
@property (nonatomic, readonly, copy) NSString *criteria;
@property (nonatomic, readonly, copy) NSString *expirationDate;
@property (nonatomic, readonly, copy) NSString *isInvalid;
@property (nonatomic, readonly, copy) NSString *messageIdentifier;
@property (nonatomic, readonly, copy) NSString *modificationDate;
@property (nonatomic, readonly, copy) NSArray *propertyValues;
@property (nonatomic, readonly, copy) NSString *receivedDate;
@property (nonatomic, readonly, copy) NSString *sendingDeviceInfo;
@property (nonatomic, readonly, copy) NSString *sendingDeviceName;

+ (id)propertyNames;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)categoryIdentifier;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)criteria;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageIdentifier:(id)arg1 creationDate:(id)arg2 receivedDate:(id)arg3 modificationDate:(id)arg4 sendingDeviceName:(id)arg5 sendingDeviceInfo:(id)arg6 action:(id)arg7 clientIdentifier:(id)arg8 categoryIdentifier:(id)arg9 expirationDate:(id)arg10 criteria:(id)arg11 isInvalid:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)isInvalid;
- (id)messageIdentifier;
- (id)modificationDate;
- (id)propertyValues;
- (id)receivedDate;
- (id)sendingDeviceInfo;
- (id)sendingDeviceName;

@end
