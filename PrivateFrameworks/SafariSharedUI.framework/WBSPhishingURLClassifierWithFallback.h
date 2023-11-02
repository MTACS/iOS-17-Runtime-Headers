
@interface WBSPhishingURLClassifierWithFallback : NSObject <WBSPhishingURLClassifier> {
    <WBSPhishingURLClassifier> * _fallbackClassifier;
    <WBSPhishingURLClassifier> * _urlClassifier;
}

@property (nonatomic, readonly) <WBSPhishingURLClassifier> *fallbackClassifier;
@property (nonatomic, readonly) <WBSPhishingURLClassifier> *urlClassifier;

+ (id)buildChain:(id)arg1;

- (void).cxx_destruct;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)fallbackClassifier;
- (id)initWithURLClassifier:(id)arg1 fallback:(id)arg2;
- (id)urlClassifier;

@end
