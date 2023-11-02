
@interface SHMediaLibraryLabel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualLabel:(id)arg1;
- (id)name;
- (long long)type;

@end
