
@interface PKPaymentAuthorizationContext : NSObject {
    NSString * _hostApplicationIdentifier;
    NSString * _hostBundleIdentifier;
    NSString * _hostIdentifier;
    NSString * _hostLocalizedAppName;
    NSString * _hostTeamID;
    PKPaymentSheetExperiment * _paymentSheetExperiment;
    PKPaymentRequest * _request;
}

@property (nonatomic, readonly) NSString *hostApplicationIdentifier;
@property (nonatomic, readonly) NSString *hostBundleIdentifier;
@property (nonatomic, readonly) NSString *hostIdentifier;
@property (nonatomic, readonly) NSString *hostLocalizedAppName;
@property (nonatomic, readonly) NSString *hostTeamID;
@property (nonatomic, readonly) PKPaymentSheetExperiment *paymentSheetExperiment;
@property (nonatomic, readonly) PKPaymentRequest *request;

- (void).cxx_destruct;
- (id)hostApplicationIdentifier;
- (id)hostBundleIdentifier;
- (id)hostIdentifier;
- (id)hostLocalizedAppName;
- (id)hostTeamID;
- (id)initWithUserInfo:(id)arg1;
- (id)paymentSheetExperiment;
- (id)request;
- (id)sanitizeString:(id)arg1;

@end
