
@interface _GCDevicePhysicalInputElementParameters : _GCDevicePhysicalInputViewParameters {
    NSSet * _aliases;
    NSString * _identifier;
    NSString * _localizedName;
    GCDevicePhysicalInputSymbolDescription * _symbol;
}

+ (id)parametersWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
