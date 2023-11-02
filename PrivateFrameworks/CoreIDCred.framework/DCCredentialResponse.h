
@interface DCCredentialResponse : NSObject <NSSecureCoding> {
    NSDictionary * _elementsByNamespace;
    NSData * _responseData;
}

@property (nonatomic, retain) NSDictionary *elementsByNamespace;
@property (nonatomic, retain) NSData *responseData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)elementsByNamespace;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseData:(id)arg1 elementsByNamespace:(id)arg2;
- (id)responseData;
- (void)setElementsByNamespace:(id)arg1;
- (void)setResponseData:(id)arg1;

@end
