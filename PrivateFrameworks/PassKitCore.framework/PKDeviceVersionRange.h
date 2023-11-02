
@interface PKDeviceVersionRange : NSObject <NSCopying, NSSecureCoding> {
    PKDeviceVersionRange * _companion;
    NSString * _maximum;
    NSString * _minimum;
    NSArray * _models;
}

@property (nonatomic, readonly) PKDeviceVersionRange *companion;
@property (nonatomic, readonly) NSString *maximum;
@property (nonatomic, readonly) NSString *minimum;
@property (nonatomic, readonly) NSArray *models;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_matchesDeviceVersion:(id)arg1;
- (id)asDictionary;
- (id)companion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeviceVersionRange:(id)arg1;
- (id)maximum;
- (id)minimum;
- (id)models;

@end
