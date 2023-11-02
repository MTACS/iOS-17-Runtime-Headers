
@interface GCGenericDevicePhysicalInputDpadModel : GCGenericDevicePhysicalInputElementModel {
    long long  _sourceDownExtendedEventFieldIndex;
    long long  _sourceLeftExtendedEventFieldIndex;
    long long  _sourceRightExtendedEventFieldIndex;
    long long  _sourceUpExtendedEventFieldIndex;
}

@property (readonly) long long sourceDownExtendedEventFieldIndex;
@property (readonly) long long sourceLeftExtendedEventFieldIndex;
@property (readonly) long long sourceRightExtendedEventFieldIndex;
@property (readonly) long long sourceUpExtendedEventFieldIndex;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sourceDownExtendedEventFieldIndex;
- (long long)sourceLeftExtendedEventFieldIndex;
- (long long)sourceRightExtendedEventFieldIndex;
- (long long)sourceUpExtendedEventFieldIndex;

@end
