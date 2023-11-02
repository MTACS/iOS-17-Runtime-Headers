
@interface YQLRequest : NSObject <NSURLSessionDataDelegate> {
    NSURLSessionTask * _dataTask;
    NSURLSession * _defaultSession;
    NSMutableData * _rawData;
    NSURLRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(bool)arg1;
+ (bool)shouldGenerateOfflineData;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)YQLCountryCode;
- (id)YQLLanguageCode;
- (void)_createDefaultSession;
- (void)_loadDefaultSessionIfNeeded;
- (id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2;
- (void)cancel;
- (void)cancelAndInvalidate;
- (void)dealloc;
- (void)didParseData;
- (void)failToParseWithData:(id)arg1;
- (void)failToParseWithDataSeriesDictionary:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)init;
- (bool)isLoading;
- (void)loadRequest:(id)arg1;
- (void)parseData:(id)arg1;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;

@end
