
@interface ECWebContentObserver : NSObject <ECWebContentObserver> {
    EDWebContentParser * _parser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) EDWebContentParser *parser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)baseURL:(id)arg1 didRequestRemoteContentURLs:(id)arg2;
- (id)initWithParser:(id)arg1;
- (void)logWebBundleMessage:(id)arg1;
- (id)parser;
- (void)receiveDataDetectionResults:(id)arg1;
- (void)requestDataDetectionResultsWithBaseURL:(id)arg1;
- (void)setParser:(id)arg1;

@end
