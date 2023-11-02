
@interface HVSearchableItemSerializedAttributes : NSObject <NSCopying> {
    CSCoder * _attributeSetCoder;
    NSData * _attributeSetData;
    NSData * _htmlContentData;
}

@property (nonatomic, readonly) CSCoder *attributeSetCoder;
@property (nonatomic, readonly) NSData *attributeSetData;
@property (nonatomic, readonly) NSData *htmlContentData;

+ (id)serializedAttributesWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3;

- (void).cxx_destruct;
- (id)attributeSetCoder;
- (id)attributeSetData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)htmlContentData;
- (id)init;
- (id)initWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSerializedAttributes:(id)arg1;

@end
