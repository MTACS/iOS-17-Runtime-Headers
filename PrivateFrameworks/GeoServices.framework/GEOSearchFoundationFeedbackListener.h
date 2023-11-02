
@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {
    NSArray * _mapsResultsIdentifiers;
    NSArray * _resultCardIdentifiers;
    int  _uiTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_identifiersFromCardSections:(id)arg1;
+ (id)_mapsResultIdentifiersFromSections:(id)arg1;
+ (id)feedbackListenerForParsec;

- (void).cxx_destruct;
- (void)cardViewDidAppear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)init;
- (id)initWithClientType:(unsigned long long)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)traits;

@end
