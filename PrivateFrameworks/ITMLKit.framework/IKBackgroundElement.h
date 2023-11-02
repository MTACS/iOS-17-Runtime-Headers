
@interface IKBackgroundElement : IKViewElement

@property (nonatomic, readonly, retain) IKAudioElement *audio;
@property (nonatomic, readonly, retain) UIColor *backgroundColor;
@property (nonatomic, readonly, retain) NSArray *images;
@property (nonatomic, readonly) double transitionInterval;

- (id)audio;
- (id)backgroundColor;
- (id)images;
- (double)transitionInterval;

@end
