
@interface BMResourceSpecifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _shortDescription;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) unsigned long long type;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 name:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)shortDescription;
- (unsigned long long)type;

@end
