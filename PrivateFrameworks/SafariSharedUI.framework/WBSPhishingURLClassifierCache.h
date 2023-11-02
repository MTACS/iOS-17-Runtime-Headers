
@interface WBSPhishingURLClassifierCache : NSObject <WBSPhishingURLClassifier> {
    NSCache * _cache;
    <WBSPhishingURLClassifier> * _urlClassifier;
}

@property (nonatomic, readonly) <WBSPhishingURLClassifier> *urlClassifier;

- (void).cxx_destruct;
- (void)cacheClassification:(unsigned long long)arg1 forURL:(id)arg2;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearCache;
- (id)initWithURLClassifier:(id)arg1;
- (id)urlClassifier;

@end
