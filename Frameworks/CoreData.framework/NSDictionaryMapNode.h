
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding> {
    id * _attributes;
    id  _attributesAsEncoded;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id*)arg1 objectID:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
