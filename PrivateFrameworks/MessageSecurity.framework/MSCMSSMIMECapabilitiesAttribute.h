
@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder> {
    NSSet * _capabilities;
}

@property (readonly, retain) MSOID *attributeType;
@property (readonly) NSSet *capabilities;

- (void).cxx_destruct;
- (id)attributeType;
- (id)capabilities;
- (id)copyAttributeData:(id*)arg1;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)init;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithCapabilities:(id)arg1;

@end
