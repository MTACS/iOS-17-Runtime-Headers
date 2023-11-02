
@interface HDNotificationInstruction : NSObject <NSCopying> {
    long long  _action;
    NSString * _categoryIdentifier;
    NSString * _clientIdentifier;
    NSDate * _creationDate;
    HDNotificationInstructionCriteria * _criteria;
    NSDate * _expirationDate;
    bool  _isInvalid;
    NSString * _messageIdentifier;
    NSDate * _modificationDate;
    NSDate * _receivedDate;
    NSString * _sendingDeviceInfo;
    NSString * _sendingDeviceName;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) HDNotificationInstructionCriteria *criteria;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool isInvalid;
@property (nonatomic, readonly, copy) NSString *messageIdentifier;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSDate *receivedDate;
@property (nonatomic, readonly, copy) NSString *sendingDeviceInfo;
@property (nonatomic, readonly, copy) NSString *sendingDeviceName;

- (void).cxx_destruct;
- (long long)action;
- (id)categoryIdentifier;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)criteria;
- (id)description;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithMessageIdentifier:(id)arg1 creationDate:(id)arg2 receivedDate:(id)arg3 modificationDate:(id)arg4 sendingDeviceName:(id)arg5 sendingDeviceInfo:(id)arg6 action:(long long)arg7 clientIdentifier:(id)arg8 categoryIdentifier:(id)arg9 expirationDate:(id)arg10 criteria:(id)arg11 isInvalid:(bool)arg12;
- (id)initWithMessageIdentifier:(id)arg1 receivedDate:(id)arg2 sendingDeviceName:(id)arg3 message:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isInvalid;
- (long long)isValidWithDatabaseTransaction:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (id)messageIdentifier;
- (id)modificationDate;
- (id)receivedDate;
- (id)sendingDeviceInfo;
- (id)sendingDeviceName;

@end
