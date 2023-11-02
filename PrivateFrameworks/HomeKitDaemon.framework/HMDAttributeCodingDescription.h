
@interface HMDAttributeCodingDescription : HMDPropertyCodingDescription {
    bool  _shouldInline;
    HMDValueTransformer * _transformer;
}

@property (readonly) NSAttributeDescription *attribute;
@property (readonly) bool shouldInline;
@property (readonly) HMDValueTransformer *transformer;

- (void).cxx_destruct;
- (id)attribute;
- (bool)shouldInline;
- (id)transformer;

@end
