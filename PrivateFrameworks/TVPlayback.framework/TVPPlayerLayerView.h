
@interface TVPPlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *avPlayerLayer;

+ (Class)layerClass;

- (id)avPlayerLayer;

@end
