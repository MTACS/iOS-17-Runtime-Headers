
@interface PAMediaConversionServiceAddPFMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {
    NSString * _key;
    id  _value;
}

@property (retain) NSString *key;
@property (retain) id value;

+ (id)policyWithKey:(id)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
