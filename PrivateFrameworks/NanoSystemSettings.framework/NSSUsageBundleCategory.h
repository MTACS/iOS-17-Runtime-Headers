
@interface NSSUsageBundleCategory : NSObject <NSSecureCoding> {
    NSString * _name;
    unsigned long long  _size;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
