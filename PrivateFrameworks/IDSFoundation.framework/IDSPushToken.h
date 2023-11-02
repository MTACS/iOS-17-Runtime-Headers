
@interface IDSPushToken : NSObject <NSCopying, NSSecureCoding> {
    NSData * _rawToken;
    NSString * _serviceLoggingHint;
}

@property (nonatomic, readonly) NSData *rawToken;
@property (nonatomic, retain) NSString *serviceLoggingHint;

+ (id)pushTokenWithData:(id)arg1;
+ (id)pushTokenWithData:(id)arg1 withServiceLoggingHint:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 withServiceLoggingHint:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPushToken:(id)arg1;
- (id)rawToken;
- (id)serviceLoggingHint;
- (void)setServiceLoggingHint:(id)arg1;

@end
