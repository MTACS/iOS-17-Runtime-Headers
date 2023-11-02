
@interface PKDeviceVersion : NSObject <NSCopying, NSSecureCoding> {
    PKDeviceVersion * _companion;
    NSString * _deviceClass;
    NSString * _generation;
    NSString * _model;
}

@property (nonatomic, readonly) PKDeviceVersion *companion;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *generation;
@property (nonatomic, readonly) NSString *model;

+ (id)fromCurrentDeviceVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)companion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)generation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeviceVersion:(id)arg1;
- (id)model;

@end
