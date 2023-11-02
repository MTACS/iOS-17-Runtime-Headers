
@interface _UIColorAttributeTraitStorage : _UITraitStorage <NSCoding> {
    _UICoreUICatalogColorWrapper * _namedColor;
}

- (void).cxx_destruct;
- (id)_propertyDescriptionString;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 color:(id)arg3;

@end
