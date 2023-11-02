
@interface WFAggregateCommonRequest : WFTask {
    id /* block */  _completionHandler;
    NSLocale * _locale;
    WFLocation * _location;
    WFRequestOptions * _requestOptions;
    NSString * _trackingParameter;
    unsigned long long  _types;
    int  _units;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) WFLocation *location;
@property (nonatomic, readonly) WFRequestOptions *requestOptions;
@property (nonatomic, readonly) NSString *trackingParameter;
@property (nonatomic, readonly) unsigned long long types;
@property (nonatomic, readonly) int units;

- (void).cxx_destruct;
- (unsigned long long)_supportedForecastTypes:(unsigned long long)arg1;
- (void)cleanup;
- (id /* block */)completionHandler;
- (id)description;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 trackingParameter:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 units:(int)arg3 requestOptions:(id)arg4 trackingParameter:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 units:(int)arg3 trackingParameter:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)locale;
- (id)location;
- (id)requestOptions;
- (void)setLocale:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)trackingParameter;
- (unsigned long long)types;
- (int)units;

@end
