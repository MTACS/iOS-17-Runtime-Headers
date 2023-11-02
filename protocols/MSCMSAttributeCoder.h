
@protocol MSCMSAttributeCoder

@required

- (MSOID *)attributeType;
- (MSCMSAttribute *)encodeAttributeWithError:(id*)arg1;
- (<MSCMSAttributeCoder> *)initWithAttribute:(MSCMSAttribute *)arg1 error:(id*)arg2;
- (bool)isKindOfClass:(Class)arg1;

@end
