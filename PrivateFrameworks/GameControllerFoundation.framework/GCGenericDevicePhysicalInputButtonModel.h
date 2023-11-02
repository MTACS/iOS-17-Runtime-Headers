
@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel {
    long long  _sourceExtendedEventFieldIndex;
}

@property (readonly) long long sourceExtendedEventFieldIndex;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sourceExtendedEventFieldIndex;

@end
