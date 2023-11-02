
@interface GCDevicePhysicalInputGroupDescription : NSObject <NSSecureCoding> {
    NSArray * _physicalInputs;
}

@property (nonatomic, copy) NSArray *physicalInputs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)physicalInputs;
- (void)setPhysicalInputs:(id)arg1;
- (bool)validate:(out id*)arg1;

@end
