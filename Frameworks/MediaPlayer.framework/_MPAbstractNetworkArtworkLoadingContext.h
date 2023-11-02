
@interface _MPAbstractNetworkArtworkLoadingContext : NSObject {
    NSMutableDictionary * _catalogIdentifierToCompletionHandlerMap;
    NSURLSessionDataTask * _dataTask;
}

@property (nonatomic, readonly) NSMutableDictionary *catalogIdentifierToCompletionHandlerMap;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;

- (void).cxx_destruct;
- (id)catalogIdentifierToCompletionHandlerMap;
- (id)dataTask;
- (id)init;
- (void)setDataTask:(id)arg1;

@end
