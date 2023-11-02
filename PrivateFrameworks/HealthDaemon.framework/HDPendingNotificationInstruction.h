
@interface HDPendingNotificationInstruction : NSObject <NSCopying> {
    NSString * _categoryIdentifier;
    NSString * _messageIdentifier;
    NSString * _sendingDeviceName;
}

@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSString *messageIdentifier;
@property (nonatomic, readonly, copy) NSString *sendingDeviceName;

- (void).cxx_destruct;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMessageIdentifier:(id)arg1 categoryIdentifier:(id)arg2 sendingDeviceName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)messageIdentifier;
- (id)sendingDeviceName;

@end
