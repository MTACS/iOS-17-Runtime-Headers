
@interface AVPlaybackRateCollection : AVPlaybackSpeedCollection

@property (nonatomic, readonly) NSArray *rates;
@property (nonatomic, readonly) AVPlaybackRate *selectedRate;

+ (id)collectionWithDefaultRates;
+ (id)collectionWithRates:(id)arg1;

- (id)rates;
- (void)selectNextPlaybackRate:(id)arg1;
- (id)selectedRate;
- (void)setSelectedRate:(id)arg1;

@end
