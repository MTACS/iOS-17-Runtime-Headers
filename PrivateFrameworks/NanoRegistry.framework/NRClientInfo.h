
@interface NRClientInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _processName;
}

@property (nonatomic, copy) NSString *processName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)processName;
- (void)setProcessName:(id)arg1;

@end
