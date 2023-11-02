
@interface LNSiriVocabulary : NSObject {
    NSString * _bundleIdentifier;
    NSMutableArray * _completions;
    NSArray * _corpora;
    LNDebouncer * _debouncer;
    <LNVocabularyDonator> * _donatorClient;
    NSObject<OS_dispatch_queue> * _queue;
    <LNVocabularyPicker> * _vocabularyPicker;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) NSMutableArray *completions;
@property (nonatomic, retain) NSArray *corpora;
@property (nonatomic, readonly) LNDebouncer *debouncer;
@property (nonatomic, readonly) <LNVocabularyDonator> *donatorClient;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <LNVocabularyPicker> *vocabularyPicker;

+ (id)vocabularyForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)completions;
- (id)corpora;
- (void)corpusContentsChanged:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)debouncer;
- (void)donateWithCompletionHandler:(id /* block */)arg1;
- (id)donatorClient;
- (id)initWithBundleIdentifier:(id)arg1 donatorClient:(id)arg2 picker:(id)arg3;
- (id)queue;
- (void)setCompletions:(id)arg1;
- (void)setCorpora:(id)arg1;
- (void)setCorporaByPriority:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)vocabularyPicker;

@end
