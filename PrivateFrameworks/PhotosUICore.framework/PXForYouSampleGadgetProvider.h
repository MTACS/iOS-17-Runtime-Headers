
@interface PXForYouSampleGadgetProvider : PXGadgetProvider <PXForYouRankable> {
    bool  _hasLoadedData;
    double  _minimumHeight;
    unsigned long long  _sampleGadgetType;
}

@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic) bool hasLoadedData;
@property (nonatomic) double minimumHeight;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;
@property (nonatomic) unsigned long long sampleGadgetType;

+ (id)defaultForYouSampleGadgetProviders;
+ (id)defaultForYouSampleHorizontalCollectionGadgetProvider;

- (unsigned long long)estimatedNumberOfGadgets;
- (long long)forYouContentIdentifier;
- (void)generateGadgets;
- (bool)hasLoadedData;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithSampleGadgetType:(unsigned long long)arg1;
- (id)initWithSampleGadgetType:(unsigned long long)arg1 minimumHeight:(double)arg2;
- (void)loadDataForGadgets;
- (double)minimumHeight;
- (id)mostRecentContentDate;
- (unsigned long long)sampleGadgetType;
- (void)setHasLoadedData:(bool)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setSampleGadgetType:(unsigned long long)arg1;

@end
