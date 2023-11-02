
@interface CALNNotificationRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    CALNNotificationContent * _content;
    NSDate * _date;
    bool  _shouldPlaySound;
    bool  _shouldPresentAlert;
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly, copy) CALNNotificationContent *content;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) bool hasAlertContent;
@property (nonatomic, readonly) bool hasSound;
@property (nonatomic, readonly) bool shouldPlaySound;
@property (nonatomic, readonly) bool shouldPresentAlert;
@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlertContent;
- (bool)hasSound;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3 date:(id)arg4 shouldPresentAlert:(bool)arg5 shouldPlaySound:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldPlaySound;
- (bool)shouldPresentAlert;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;

@end
