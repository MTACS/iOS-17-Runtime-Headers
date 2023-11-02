
@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider> {
    NSObject<WFStatisticsSampleProvider> * _sampleProvider;
}

@property (nonatomic, readonly) bool canProvideDataSamples;
@property (nonatomic, readonly) NSArray *dataSamples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<WFStatisticsSampleProvider> *sampleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSampleProvider:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)sampleProvider;
- (void)setSampleProvider:(id)arg1;

@end
