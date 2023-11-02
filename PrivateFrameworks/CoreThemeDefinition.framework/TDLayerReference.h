
@interface TDLayerReference : TDAbstractLayerReference

@property (nonatomic, retain) TDNamedArtworkProduction *reference;
@property (nonatomic, retain) TDLayerStackRenditionSpec *stack;

- (id)cuiLayerReference;

@end
