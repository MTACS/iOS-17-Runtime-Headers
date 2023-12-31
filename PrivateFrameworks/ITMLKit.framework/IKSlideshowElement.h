
@interface IKSlideshowElement : IKViewElement

@property (nonatomic, readonly, retain) NSArray *images;
@property (nonatomic, readonly) long long showSettings;
@property (nonatomic, readonly) unsigned long long transition;
@property (nonatomic, readonly) double transitionInterval;

- (id)images;
- (long long)showSettings;
- (unsigned long long)transition;
- (double)transitionInterval;

@end
