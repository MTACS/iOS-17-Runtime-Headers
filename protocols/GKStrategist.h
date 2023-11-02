
@protocol GKStrategist <NSObject>

@required

- (<GKGameModelUpdate> *)bestMoveForActivePlayer;
- (<GKGameModel> *)gameModel;
- (<GKRandom> *)randomSource;
- (void)setGameModel:(id <GKGameModel>)arg1;
- (void)setRandomSource:(id <GKRandom>)arg1;

@end
