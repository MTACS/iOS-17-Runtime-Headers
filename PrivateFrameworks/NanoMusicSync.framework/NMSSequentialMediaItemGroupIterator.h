
@interface NMSSequentialMediaItemGroupIterator : NMSMediaItemGroupIterator

- (void)_continueToNextContainer;
- (void)_continueToNextIdentifier;
- (unsigned long long)iteratingOrder;
- (void)markAllRemainingContainersAsSkipped;

@end
