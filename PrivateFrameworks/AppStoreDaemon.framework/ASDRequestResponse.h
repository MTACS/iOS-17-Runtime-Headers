
@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    bool  _success;
}

@property (copy) NSError *error;
@property bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
