
@interface HFOpenURLRouter : NSObject {
    <HFApplicationURLHandling> * _applicationURLHandler;
}

@property (nonatomic) <HFApplicationURLHandling> *applicationURLHandler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendAnalyticsEventForURL:(id)arg1;
- (id)applicationURLHandler;
- (id)openSensitiveURL:(id)arg1;
- (id)openURL:(id)arg1;
- (void)setApplicationURLHandler:(id)arg1;

@end
