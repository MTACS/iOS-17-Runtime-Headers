
@interface _AVSimplePlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

+ (id)keyPathsForValuesAffectingPlayerLayer;
+ (Class)layerClass;

- (id)playerLayer;

@end
