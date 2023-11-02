
@interface SCWPreferences : NSObject {
    NSString * _UUID;
    NSString * _acceptLanguageCode;
    NSString * _requestCountryCode;
    NSString * _requestLanguageCode;
}

@property (nonatomic, readonly) NSString *UUID;
@property (retain) NSString *acceptLanguageCode;
@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)UUID;
- (id)_stocksAcceptLanguage;
- (id)_stocksUserAgent;
- (id)acceptLanguageCode;
- (id)init;
- (id)requestCountryCode;
- (id)requestLanguageCode;
- (void)resetLocale;
- (void)setAcceptLanguageCode:(id)arg1;
- (void)setRequestCountryCode:(id)arg1;
- (void)setRequestLanguageCode:(id)arg1;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (id)stocksLanguageCodeForLanguage:(id)arg1;
- (id)stocksYQLBaseURL;

@end
