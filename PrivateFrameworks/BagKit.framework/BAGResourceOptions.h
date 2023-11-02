
@interface BAGResourceOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSString * _bundleID;
    NSString * _name;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 additionalOptions:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 additionalOptions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setAdditionalOptions:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
