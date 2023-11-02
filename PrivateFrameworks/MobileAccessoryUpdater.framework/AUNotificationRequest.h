
@interface AUNotificationRequest : NSObject <NSSecureCoding> {
    NSString * _accessoryName;
    long long  _type;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (id)accessoryName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initUnplugReplugNotificationWithAccessoryName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
