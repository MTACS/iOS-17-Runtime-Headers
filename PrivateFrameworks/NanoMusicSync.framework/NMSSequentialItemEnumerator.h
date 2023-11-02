
@interface NMSSequentialItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray * _itemEnumerators;
}

- (void).cxx_destruct;
- (id)initWithItemEnumerators:(id)arg1;
- (id)nextItem;

@end
