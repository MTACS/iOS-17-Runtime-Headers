
@interface CPSDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _buildVersion;
    unsigned long long  _flags;
    NSString * _model;
    NSString * _name;
}

@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;

+ (id)currentDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initCurrentDevice;
- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (void)setBuildVersion:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;

@end
