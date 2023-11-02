
@interface NMSAlternatingItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    unsigned long long  _itemEnumeratorIndex;
    NSMutableArray * _itemEnumerators;
}

- (void).cxx_destruct;
- (id)initWithItemEnumerators:(id)arg1;
- (id)nextItem;

@end
