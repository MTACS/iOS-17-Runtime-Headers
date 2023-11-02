
@interface SYUserActivityWrapper : NSObject <NSCopying, NSSecureCoding> {
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)userActivity;

@end
