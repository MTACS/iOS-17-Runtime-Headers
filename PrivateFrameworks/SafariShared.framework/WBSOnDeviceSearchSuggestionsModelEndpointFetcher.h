
@interface WBSOnDeviceSearchSuggestionsModelEndpointFetcher : NSObject {
    NSURLSessionDataTask * _dataTask;
    NSDictionary * _modelEndpointInfos;
    NSURLSession * _urlSession;
}

- (void).cxx_destruct;
- (id)_parseEndpointsFromString:(id)arg1;
- (void)fetchModelEndpointURLsWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
