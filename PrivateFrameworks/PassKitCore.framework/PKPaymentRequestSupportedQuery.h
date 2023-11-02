
@interface PKPaymentRequestSupportedQuery : NSObject {
    bool  _isMultiTokensRequest;
    bool  _issuedOnTheWeb;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantCountryCode;
    NSSet * _paymentApplicationStates;
    long long  _paymentMode;
    NSNumber * _paymentRequestType;
    NSArray * _supportedNetworkIDs;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) bool isMultiTokensRequest;
@property (nonatomic, readonly) bool issuedOnTheWeb;
@property (nonatomic, readonly) unsigned long long merchantCapabilities;
@property (nonatomic, readonly) NSString *merchantCountryCode;
@property (nonatomic, readonly) NSSet *paymentApplicationStates;
@property (nonatomic, readonly) long long paymentMode;
@property (nonatomic, readonly) NSNumber *paymentRequestType;
@property (nonatomic, readonly) NSArray *supportedNetworkIDs;
@property (nonatomic, readonly) PKPaymentWebService *webService;

+ (id)inAppQueryWithSupportedNetworkIDs:(id)arg1 merchantCapabilities:(unsigned long long)arg2 merchantCountryCode:(id)arg3 paymentMode:(long long)arg4 paymentApplicationStates:(id)arg5 paymentRequestType:(id)arg6 isMultiTokensRequest:(bool)arg7 webService:(id)arg8;
+ (id)webQueryWithSupportedNetworkIDs:(id)arg1 merchantCapabilities:(unsigned long long)arg2 merchantCountryCode:(id)arg3 paymentMode:(long long)arg4 paymentApplicationStates:(id)arg5 isMultiTokensRequest:(bool)arg6 webService:(id)arg7;

- (void).cxx_destruct;
- (id)initWithIssuedOnTheWeb:(bool)arg1 supportedNetworkIDs:(id)arg2 merchantCapabilities:(unsigned long long)arg3 merchantCountryCode:(id)arg4 paymentMode:(long long)arg5 paymentApplicationStates:(id)arg6 paymentRequestType:(id)arg7 isMultiTokensRequest:(bool)arg8 webService:(id)arg9;
- (bool)isMultiTokensRequest;
- (bool)issuedOnTheWeb;
- (unsigned long long)merchantCapabilities;
- (id)merchantCountryCode;
- (id)paymentApplicationStates;
- (long long)paymentMode;
- (id)paymentRequestType;
- (id)supportedNetworkIDs;
- (id)webService;

@end
