
@interface HDNotificationInstructionMessage : NSObject <NSCopying> {
    long long  _action;
    NSString * _categoryIdentifier;
    NSString * _clientIdentifier;
    NSDate * _creationDate;
    HDNotificationInstructionCriteria * _criteria;
    NSDate * _expirationDate;
    NSString * _sendingDeviceInfo;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) HDNotificationInstructionCriteria *criteria;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSDictionary *messageDictionary;
@property (nonatomic, readonly, copy) NSString *sendingDeviceInfo;

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
- (id)initWithCreationDate:(id)arg1 sendingDeviceInfo:(id)arg2 action:(long long)arg3 clientIdentifier:(id)arg4 categoryIdentifier:(id)arg5 expirationDate:(id)arg6 criteria:(id)arg7;
- (id)initWithMessageDictionary:(id)arg1 criteriaClasses:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)messageDictionary;
- (id)sendingDeviceInfo;

@end
