
@interface ADResponseData : NSObject {
    NSString * _algoID;
    NSString * _clientRequestID;
    NSDictionary * _format;
    NSString * _impressionID;
    ADInstallAttributionData * _installAttribution;
    NSString * _lineItem;
    NSString * _metadata;
    NSString * _privacy;
    NSString * _templateType;
}

@property (nonatomic, readonly, copy) NSString *algoID;
@property (nonatomic, readonly, copy) NSString *clientRequestID;
@property (nonatomic, readonly, copy) NSDictionary *format;
@property (nonatomic, readonly, copy) NSString *impressionID;
@property (nonatomic, readonly, copy) ADInstallAttributionData *installAttribution;
@property (nonatomic, readonly, copy) NSString *lineItem;
@property (nonatomic, readonly, copy) NSString *metadata;
@property (nonatomic, readonly, copy) NSString *privacy;
@property (nonatomic, readonly, copy) NSString *templateType;

- (void).cxx_destruct;
- (id)algoID;
- (id)clientRequestID;
- (id)format;
- (id)impressionID;
- (id)initWithDict:(id)arg1;
- (id)installAttribution;
- (id)lineItem;
- (id)metadata;
- (id)privacy;
- (id)templateType;

@end
