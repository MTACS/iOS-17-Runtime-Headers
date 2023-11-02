
@interface GCGenericDeviceRumbleModel : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actuators;
    float  _dispatchFrequency;
    NSArray * _nodes;
    NSArray * _outputs;
}

@property (readonly, copy) NSArray *actuators;
@property (readonly) float dispatchFrequency;
@property (readonly, copy) NSArray *nodes;
@property (readonly, copy) NSArray *outputs;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actuators;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (float)dispatchFrequency;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nodes;
- (id)outputs;

@end
