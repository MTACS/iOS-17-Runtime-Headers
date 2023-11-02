
@interface VUIPlaybackErrorMessage : NSObject {
    NSDictionary * _deviceInfo;
    NSURL * _knownIssuesURL;
}

@property (nonatomic, retain) NSDictionary *deviceInfo;
@property (nonatomic, retain) NSURL *knownIssuesURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createQueryItemsFor:(id)arg1 withDevice:(id)arg2 withLanguageCode:(id)arg3;
- (void)_getBaseURL:(id /* block */)arg1;
- (id)_getLanguageCode;
- (void)_getLocalizedErrorMessageFrom:(id)arg1 completion:(id /* block */)arg2;
- (id)_getSessionInfoFor:(id)arg1 withError:(id)arg2;
- (void)_logMetricsWithMessageType:(id)arg1 withSession:(id)arg2 withDevice:(id)arg3 withLanguageCode:(id)arg4;
- (id)deviceInfo;
- (void)getLocalizedErrorMessageFor:(id)arg1 withError:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)knownIssuesURL;
- (void)setDeviceInfo:(id)arg1;
- (void)setKnownIssuesURL:(id)arg1;

@end
