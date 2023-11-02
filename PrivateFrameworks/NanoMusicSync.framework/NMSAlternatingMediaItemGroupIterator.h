
@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {
    unsigned long long  _maxItemListSize;
}

- (void)_continueToNextContainer;
- (void)_continueToNextIdentifier;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_resetMaxItemListSize;
- (unsigned long long)iteratingOrder;
- (void)markAllRemainingContainersAsSkipped;
- (void)resetToIterateOverQuotaIdentifiers;

@end
