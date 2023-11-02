
@interface ATXFakeAnchorModelTrainer : NSObject <ATXAnchorModelTrainerProtocol> {
    bool  _trained;
    NSMutableArray * _trainedAnchors;
    NSMutableDictionary * _trainingResultsForAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool trained;
@property (nonatomic, readonly) NSMutableArray *trainedAnchors;

- (void).cxx_destruct;
- (id)init;
- (void)setTrainingResultsForAnchor:(id)arg1 results:(id)arg2;
- (void)train;
- (id)trainAnchorModel:(id)arg1;
- (bool)trained;
- (id)trainedAnchors;

@end
