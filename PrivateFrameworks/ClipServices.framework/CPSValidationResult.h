
@interface CPSValidationResult : NSObject <NSSecureCoding> {
    CPSValidationRequest * _request;
    NSDictionary * _response;
}

@property (nonatomic, readonly) NSDictionary *availabilities;
@property (nonatomic, readonly) CPSValidationRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availabilities;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
- (id)request;
- (id)validBundleIDForURL:(id)arg1;

@end
