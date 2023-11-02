
@interface KVSimulatedPriorRetriever : NSObject <KVPriorRetriever> {
    NSDictionary * _simulatedPriors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPriorInfoWithThreshold:(unsigned int)arg1;
- (id)init;
- (id)initWithSimulatedPriors:(id)arg1;
- (id)priorInfoForItemIds:(id)arg1;

@end
