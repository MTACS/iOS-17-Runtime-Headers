
@interface RTEnumerationOptions : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (unsigned long long)batchSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id /* block */)processingBlock;

@end
