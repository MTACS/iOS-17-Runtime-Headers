
@interface SiriAnalyticsUnifiedBiomeStream : NSObject {
    SiriAnalyticsPreferences * _prefs;
    BMSource * _source;
    BMStoreStream * _stream;
    NSURL * _url;
}

- (void).cxx_destruct;
- (void)fetchMessagesBatchSinceBookmark:(id)arg1 batchSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchMessagesSince:(double)arg1 receiveMessage:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)fetchMessagesSinceBookmark:(id)arg1 receiveMessage:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithStorageURL:(id)arg1 prefs:(id)arg2;
- (void)prune;
- (void)sendEvents:(id)arg1;

@end
