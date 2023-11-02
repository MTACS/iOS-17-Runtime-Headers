
@interface CTPNRRequestSentInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _success;
    NSNumber * _timeout;
    NSString * _token;
}

@property (nonatomic) bool success;
@property (nonatomic, retain) NSNumber *timeout;
@property (nonatomic, retain) NSString *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTPNRRequestSentInfo:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimeout:(id)arg1;
- (void)setToken:(id)arg1;
- (bool)success;
- (id)timeout;
- (id)token;

@end
