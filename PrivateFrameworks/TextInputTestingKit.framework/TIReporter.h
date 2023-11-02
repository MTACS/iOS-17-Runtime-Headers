
@interface TIReporter : NSObject {
    NSString * _buildVersion;
    bool  _isTransliterating;
    NSObject<OS_dispatch_queue> * _logSerializationQueue;
    NSDictionary * _options;
    NSMutableArray * _resultLoggers;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *localeIdentifierForLanguage;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, readonly) NSMutableArray *resultLoggers;
@property (nonatomic, readonly) NSString *textCorpus;

+ (id)fileURLForTrial:(unsigned long long)arg1 withOptions:(id)arg2;
+ (id)languageForOptions:(id)arg1;
+ (id)textCorpusForOptions:(id)arg1;

- (void).cxx_destruct;
- (id)alignedTypingSequenceForResult:(id)arg1 keystrokeSegmentationMode:(unsigned long long)arg2;
- (id)alignedTypingSequenceForTransliteratedResult:(id)arg1;
- (void)beginLogTrial;
- (id)buildVersion;
- (void)collectAggdStatisticsForResult:(id)arg1;
- (void)endLogTrial;
- (id)initWithBuildVersion:(id)arg1;
- (id)language;
- (id)localeIdentifierForLanguage;
- (void)logResult:(id)arg1;
- (id)options;
- (id)reportForAutocorrectionResults:(id)arg1;
- (id)reportForTrial:(unsigned long long)arg1;
- (id)resultLoggers;
- (id)resultsForTrial:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (bool)shouldConcatenateTokensAtBoundaryError;
- (id)textCorpus;

@end
