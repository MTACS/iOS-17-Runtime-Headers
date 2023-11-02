
@interface PXForYouFooterGadgetProvider : PXGadgetProvider <PXForYouRankable> {
    bool  _attemptedToGenerateGadgets;
    long long  _footerState;
}

@property (nonatomic) bool attemptedToGenerateGadgets;
@property (nonatomic) long long footerState;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (bool)_didProcessContentOvernight;
- (void)_generateFooterGadget;
- (void)_handleFaceProgressCompletionWithFacesCountDictionary:(id)arg1;
- (void)_handleSceneProgressCompletionWithUnprocessedCount:(unsigned long long)arg1;
- (id)_peaceMemoryFetchOptions;
- (bool)attemptedToGenerateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)footerState;
- (long long)forYouContentIdentifier;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (id)mostRecentContentDate;
- (void)setAttemptedToGenerateGadgets:(bool)arg1;
- (void)setFooterState:(long long)arg1;

@end
