
@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding> {
    UITraitCollection * _traitCollection;
    id  _value;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;
- (id)traitCollection;
- (id)value;

@end
