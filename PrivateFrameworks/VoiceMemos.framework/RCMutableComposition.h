
@interface RCMutableComposition : RCComposition

@property (nonatomic, retain) NSArray *decomposedFragments;

- (void)recacheComposedDuration;

@end
