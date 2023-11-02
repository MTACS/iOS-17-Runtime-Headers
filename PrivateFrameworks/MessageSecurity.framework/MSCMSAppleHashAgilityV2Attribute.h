
@interface MSCMSAppleHashAgilityV2Attribute : NSObject <MSCMSAttributeCoder> {
    NSDictionary * _hashAgilityValues;
}

@property (readonly, retain) MSOID *attributeType;
@property (readonly, retain) NSDictionary *hashAgilityValues;

- (void).cxx_destruct;
- (id)attributeType;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)hashAgilityValues;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithHashAgilityValues:(id)arg1;

@end
