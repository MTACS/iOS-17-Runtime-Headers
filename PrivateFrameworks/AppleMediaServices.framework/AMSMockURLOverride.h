
@interface AMSMockURLOverride : NSObject <NSCopying> {
    NSMutableArray * _comparators;
    AMSObservable * _executedObservable;
    AMSMockURLResponse * _response;
}

@property (nonatomic, retain) NSMutableArray *comparators;
@property (nonatomic, retain) AMSObservable *executedObservable;
@property (nonatomic, retain) AMSMockURLResponse *response;

+ (id)overrideWithHost:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2;

- (void).cxx_destruct;
- (void)_withURLMatchingHost:(id)arg1 containingPath:(id)arg2 queryItems:(id)arg3;
- (id)comparators;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)executedObservable;
- (id)init;
- (id)response;
- (void)setComparators:(id)arg1;
- (void)setExecutedObservable:(id)arg1;
- (void)setResponse:(id)arg1;
- (bool)shouldOverrideURLRequest:(id)arg1;
- (void)withHTTPBodyValidation:(id /* block */)arg1 encoding:(long long)arg2;
- (void)withResponse:(id)arg1;
- (void)withURLContainingPath:(id)arg1;
- (void)withURLMatchingHost:(id)arg1;
- (void)withURLQueryItems:(id)arg1;
- (void)withURLRegexValidation:(id)arg1;

@end
