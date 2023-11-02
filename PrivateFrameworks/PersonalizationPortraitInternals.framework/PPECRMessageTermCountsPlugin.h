
@interface PPECRMessageTermCountsPlugin : NSObject <HVMailConsumer, HVMessagesConsumer> {
    unsigned long long  _maxUniqueTokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classLock;
+ (void)reduceUnigramCountSetSizeIfNeeded:(id)arg1 maxUniqueTokens:(unsigned long long)arg2;
+ (id)sharedInstance;

- (void)_deleteEventsMatchingTest:(id /* block */)arg1;
- (void)_sendEvent:(id)arg1;
- (void)_updateUnigramCountsFromText:(id)arg1 unigramCounts:(id)arg2 totalTokenCount:(unsigned long long*)arg3;
- (id)consumeMailContentWithContext:(id)arg1;
- (id)consumeMessagesContentWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;
- (id)generateTermCountsFromUnigramCounts:(id)arg1;
- (id)init;
- (id)initWithMaxUniqueTokens:(unsigned long long)arg1;

@end
