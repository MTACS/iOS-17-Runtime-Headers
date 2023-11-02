
@interface GEOCommuteNotificationDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _commuteDetailsIdentifier;
    NSDate * _expirationDate;
    NSString * _message;
    long long  _score;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *commuteDetailsIdentifier;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commuteDetailsIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 commuteDetailsIdentifier:(id)arg3 expirationDate:(id)arg4 score:(long long)arg5;
- (id)message;
- (long long)score;
- (id)title;

@end
