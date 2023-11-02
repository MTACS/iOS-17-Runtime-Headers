
@interface ICQError : NSObject

+ (id)_errorWithCode:(long long)arg1 retryAfter:(id)arg2;
+ (id)_formatterForHTTPDate;
+ (id)_retryAfterDateFromString:(id)arg1;
+ (id)_retryAfterDelayFromString:(id)arg1;
+ (id)retryErrorWithRetryAfter:(id)arg1;
+ (id)serviceUnavailableWithRetryAfter:(id)arg1;

@end
