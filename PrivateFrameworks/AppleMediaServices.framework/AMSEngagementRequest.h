
@interface AMSEngagementRequest : NSObject <AMSEngagementRequestPresentationProvider, NSSecureCoding> {
    NSURL * _URL;
    ACAccount * _account;
    bool  _anonymousMetrics;
    NSDictionary * _clientData;
    long long  _destinationStyle;
    bool  _failOnDismiss;
    NSString * _logKey;
    NSDictionary * _metricsOverlay;
    NSData * _modelData;
    NSURL * _originatingURL;
    long long  _presentationStyle;
    bool  _silentlyCheckURL;
    bool  _suppressInteractiveModalDismissal;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool anonymousMetrics;
@property (nonatomic, retain) NSDictionary *clientData;
@property (nonatomic) long long destinationStyle;
@property (nonatomic) bool failOnDismiss;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (nonatomic, retain) NSData *modelData;
@property (nonatomic, retain) NSURL *originatingURL;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) bool silentlyCheckURL;
@property (nonatomic) bool suppressInteractiveModalDismissal;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_accountFromDictionary:(id)arg1;
- (long long)_engagementPresentationStyleFromDictionary:(id)arg1;
- (id)account;
- (bool)anonymousMetrics;
- (id)clientData;
- (long long)destinationStyle;
- (void)encodeWithCoder:(id)arg1;
- (bool)failOnDismiss;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 destinationStyle:(long long)arg2;
- (id)initWithRequestDictionary:(id)arg1;
- (id)logKey;
- (id)metricsOverlay;
- (id)modelData;
- (id)modelForClass:(Class)arg1 error:(id*)arg2;
- (id)originatingURL;
- (long long)presentationStyle;
- (void)setAccount:(id)arg1;
- (void)setAnonymousMetrics:(bool)arg1;
- (void)setClientData:(id)arg1;
- (void)setDestinationStyle:(long long)arg1;
- (void)setFailOnDismiss:(bool)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setModelData:(id)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setSilentlyCheckURL:(bool)arg1;
- (void)setSuppressInteractiveModalDismissal:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)silentlyCheckURL;
- (bool)suppressInteractiveModalDismissal;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)generateWebExportWithContext:(id)arg1;
- (bool)isPresentationRequest;
- (id)loadViewControllerForEngagementController:(id)arg1;

@end
