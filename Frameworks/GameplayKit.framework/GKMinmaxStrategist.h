
@interface GKMinmaxStrategist : NSObject <GKStrategist> {
    void * _cppMinmax;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <GKGameModel> *gameModel;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxLookAheadDepth;
@property (nonatomic, retain) <GKRandom> *randomSource;
@property (readonly) Class superclass;

- (id)bestMoveForActivePlayer;
- (id)bestMoveForPlayer:(id)arg1;
- (void)dealloc;
- (id)gameModel;
- (id)init;
- (long long)maxLookAheadDepth;
- (id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2;
- (id)randomSource;
- (void)setGameModel:(id)arg1;
- (void)setMaxLookAheadDepth:(long long)arg1;
- (void)setRandomSource:(id)arg1;

@end
