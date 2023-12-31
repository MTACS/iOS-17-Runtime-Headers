
@interface CoreDAVRequestLogger : NSObject {
    NSArray * _headerSortDescriptors;
    <CoreDAVAccountInfoProvider> * _provider;
    int  _snippetsLogged;
}

@property (nonatomic, retain) NSArray *headerSortDescriptors;

+ (id)_redactedHeadersFromHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)_inflateRequestBody:(id)arg1;
- (void)finishCoreDAVResponse;
- (id)headerSortDescriptors;
- (id)initWithProvider:(id)arg1;
- (void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(long long)arg2 withTaskIdentifier:(id)arg3;
- (void)logCoreDAVResponseSnippet:(id)arg1;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(bool)arg3;
- (void)setHeaderSortDescriptors:(id)arg1;

@end
