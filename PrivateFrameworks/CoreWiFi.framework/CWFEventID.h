
@interface CWFEventID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _interfaceName;
    long long  _type;
}

@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic) long long type;

+ (id)eventIDWithType:(long long)arg1 interfaceName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventID:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
