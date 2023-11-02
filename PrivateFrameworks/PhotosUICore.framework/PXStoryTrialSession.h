
@interface PXStoryTrialSession : NSObject {
    TRIClient * _trialClient;
}

@property (nonatomic, retain) TRIClient *trialClient;

- (void).cxx_destruct;
- (id)_levelForFactorName:(id)arg1;
- (id)fileURLForFactorName:(id)arg1;
- (id)init;
- (void)setTrialClient:(id)arg1;
- (id)trialClient;

@end
