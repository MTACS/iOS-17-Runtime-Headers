
@interface _SFWebClipMetadataFetcher : NSObject {
    bool  _fetchingCompleted;
    _SFInjectedJavaScriptController * _jsController;
    NSArray * _linkTags;
    NSDictionary * _metaTags;
    NSMutableArray * _metadataConsumers;
}

+ (id)_webClipLinkTagWithDictionary:(id)arg1;
+ (id)metadataFetcherScriptSource;
+ (void)parseRawMetadataDictionary:(id)arg1 consumer:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_startFetchingMetadata;
- (void)fetchMetadataWithConsumer:(id /* block */)arg1;
- (id)initWithInjectedJavascriptController:(id)arg1;

@end
