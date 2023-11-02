
@interface SFNotificationError : NSObject <NSCopying, NSSecureCoding> {
    NSString * _errorDescription;
}

@property (nonatomic, retain) NSString *errorDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDescription;
- (id)initWithCoder:(id)arg1;
- (void)setErrorDescription:(id)arg1;

@end
