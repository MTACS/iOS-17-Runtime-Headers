
@interface GKHybridStrategist : NSObject <GKStrategist> {
    void * _hybridStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long explorationParameter;
@property (nonatomic, retain) <GKGameModel> *gameModel;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxLookAheadDepth;
@property (nonatomic, retain) <GKRandom> *randomSource;
@property (readonly) Class superclass;

- (id)bestMoveForActivePlayer;
- (unsigned long long)budget;
- (void)dealloc;
- (unsigned long long)explorationParameter;
- (id)gameModel;
- (id)init;
- (unsigned long long)maxLookAheadDepth;
- (id)randomSource;
- (void)setBudget:(unsigned long long)arg1;
- (void)setExplorationParameter:(unsigned long long)arg1;
- (void)setGameModel:(id)arg1;
- (void)setMaxLookAheadDepth:(unsigned long long)arg1;
- (void)setRandomSource:(id)arg1;
- (bool)validateGameModel:(id)arg1;
- (bool)validateRandomSource;

@end
