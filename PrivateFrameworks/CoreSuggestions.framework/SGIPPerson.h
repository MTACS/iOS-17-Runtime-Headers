
@interface SGIPPerson : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handle;
    NSString * _handleType;
    NSString * _name;
}

@property (nonatomic, retain) NSString *handle;
@property (nonatomic, retain) NSString *handleType;
@property (nonatomic, retain) NSString *name;

+ (id)personWithIPPerson:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)handleType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPerson:(id)arg1;
- (id)name;
- (void)setHandle:(id)arg1;
- (void)setHandleType:(id)arg1;
- (void)setName:(id)arg1;

@end
