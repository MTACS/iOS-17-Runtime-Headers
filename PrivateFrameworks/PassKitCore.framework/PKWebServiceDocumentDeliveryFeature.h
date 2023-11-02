
@interface PKWebServiceDocumentDeliveryFeature : PKWebServiceRegionFeature {
    bool  _enabled;
    NSURL * _webServiceURL;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSURL *webServiceURL;

+ (id)featureWithWebService:(id)arg1;
+ (bool)isEnabledWithWebService:(id)arg1;
+ (id)webServiceURLWithWebService:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (bool)isEnabled;
- (id)webServiceURL;

@end
