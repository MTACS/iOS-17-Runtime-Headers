
@interface PKPayLaterMerchandisingUtilities : NSObject {
    NSLocale * _locale;
    NSURLSession * _urlSession;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_baseURLComponents;
- (id)_dynamicMerchandisingURLWithRegionCode:(id)arg1;
- (bool)_evaluateLocalChecksForConfiguration:(id)arg1 outError:(id*)arg2 invalidProperties:(id*)arg3;
- (bool)_formValidationError:(id*)arg1 underlyingError:(id)arg2;
- (id)_fragmentForModalConfiguration:(id)arg1;
- (id)_localeString;
- (void)_performWebRequestForURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_urlWithBaseURL:(id)arg1 pathComponents:(id)arg2 queryParameters:(id)arg3 fragment:(id)arg4;
- (void)_validateRemoteChecksForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)clearWebRequestCache;
- (void)evaluateEligibilityForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)generateJavaScriptQueryForUpdatedProperty:(id)arg1 newValue:(id)arg2;
- (id)init;
- (id)merchandisingBaseURLForEnviornmentType:(unsigned long long)arg1;
- (id)merchandisingEligibilityURLWithConfiguration:(id)arg1;
- (id)merchandisingModalURLWithConfiguration:(id)arg1;
- (void)merchandisingWidgetHTMLWithConfiguration:(id)arg1 completion:(id /* block */)arg2;

@end
