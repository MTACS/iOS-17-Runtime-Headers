
@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder> {
    NSData * _hashAgilityValue;
}

@property (readonly, retain) MSOID *attributeType;
@property (readonly, retain) NSData *hashAgilityValue;

- (void).cxx_destruct;
- (id)attributeType;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)hashAgilityValue;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithHashAgilityValue:(id)arg1;

@end
