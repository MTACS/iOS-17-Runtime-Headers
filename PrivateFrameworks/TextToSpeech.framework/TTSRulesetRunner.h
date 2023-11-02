
@interface TTSRulesetRunner : NSObject {
    bool  _executing;
    id /* block */  _matchLogger;
    id /* block */  _postRuleWriter;
    id /* block */  _preRuleWriter;
    NSObject<OS_dispatch_queue> * _regexExecutionQueue;
    NSMutableArray * _ruleReplacements;
    NSMutableArray * _ruleSets;
    bool  _shouldAbort;
}

@property bool executing;
@property (nonatomic, copy) id /* block */ matchLogger;
@property (nonatomic, copy) id /* block */ postRuleWriter;
@property (nonatomic, copy) id /* block */ preRuleWriter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *regexExecutionQueue;
@property (nonatomic, readonly) NSNumber *ruleCount;
@property (nonatomic, retain) NSMutableArray *ruleReplacements;
@property (nonatomic, retain) NSMutableArray *ruleSets;
@property bool shouldAbort;

- (void).cxx_destruct;
- (id)_computeActiveRanges:(id)arg1 withIgnoreRanges:(id)arg2;
- (id)_ignoreRangesForString:(id)arg1;
- (id)_processSpeechString:(id)arg1 startingAt:(unsigned long long)arg2 currentRecursionDepth:(unsigned long long)arg3;
- (id)_processTemplateReplacementTextForText:(id)arg1 replacement:(id)arg2 cString:(const char *)arg3;
- (void)_recomputeRuleOrdering;
- (void)cancelProcessing;
- (bool)executing;
- (id)init;
- (void)loadRuleSet:(id)arg1;
- (id /* block */)matchLogger;
- (id /* block */)postRuleWriter;
- (id /* block */)preRuleWriter;
- (id)processText:(id)arg1;
- (id)regexExecutionQueue;
- (void)reset;
- (id)ruleCount;
- (id)ruleReplacements;
- (id)ruleSets;
- (void)setExecuting:(bool)arg1;
- (void)setMatchLogger:(id /* block */)arg1;
- (void)setPostRuleWriter:(id /* block */)arg1;
- (void)setPreRuleWriter:(id /* block */)arg1;
- (void)setRegexExecutionQueue:(id)arg1;
- (void)setRuleReplacements:(id)arg1;
- (void)setRuleSets:(id)arg1;
- (void)setShouldAbort:(bool)arg1;
- (bool)shouldAbort;
- (void)unloadRuleset:(id)arg1;

@end
