
@interface ASDTestFlightServiceExtensionPushMessage : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _timestamp;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 userInfo:(id)arg2;
- (id)timestamp;
- (id)userInfo;

@end
