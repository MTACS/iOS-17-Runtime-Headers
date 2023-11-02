
@interface AMSCarrierLinkResult : NSObject <NSSecureCoding> {
    NSString * _channelCustomerId;
    NSError * _error;
    AMSCarrierLinkParams * _linkParams;
    NSString * _productCode;
    NSDictionary * _response;
    NSNumber * _statusCode;
}

@property (nonatomic, readonly) NSString *channelCustomerId;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AMSCarrierLinkParams *linkParams;
@property (nonatomic, readonly) NSString *productCode;
@property (nonatomic, readonly) NSDictionary *response;
@property (nonatomic, readonly) NSNumber *statusCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelCustomerId;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1 linkParams:(id)arg2;
- (id)linkParams;
- (id)productCode;
- (id)response;
- (id)statusCode;

@end
