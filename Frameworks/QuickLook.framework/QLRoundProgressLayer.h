
@interface QLRoundProgressLayer : CALayer

@property (nonatomic) double progress;

+ (bool)needsDisplayForKey:(id)arg1;

- (id)initWithLayer:(id)arg1;
- (bool)needsDisplayOnBoundsChange;

@end
