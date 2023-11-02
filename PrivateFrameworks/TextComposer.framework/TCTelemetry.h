
@interface TCTelemetry : NSObject {
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    NSMutableArray * _cachedSentenceHashArray;
    unsigned long long  _capacity;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_cacheHitForSentence:(id)arg1;
- (void)_registerPayload:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (void)trackPostEditingRequest:(id)arg1 inString:(id)arg2 offset:(unsigned long long)arg3 tagger:(id)arg4 appIdentifier:(id)arg5;
- (void)trackResponse:(long long)arg1 toGrammarDetail:(id)arg2 language:(id)arg3 appIdentifier:(id)arg4;

@end
