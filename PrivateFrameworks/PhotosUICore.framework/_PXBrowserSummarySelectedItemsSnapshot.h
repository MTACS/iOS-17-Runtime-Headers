
@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot> {
    <PXBrowserSelectionSnapshot> * _browserSelectionSnapshot;
}

@property (nonatomic, readonly) <PXBrowserSelectionSnapshot> *browserSelectionSnapshot;
@property (nonatomic, readonly) long long count;

- (void).cxx_destruct;
- (id)browserSelectionSnapshot;
- (id)containsItemReference:(id)arg1;
- (long long)count;
- (id)init;
- (id)initWithBrowserSelectionSnapshot:(id)arg1;
- (id)itemForItemReference:(id)arg1;
- (id)itemReferenceAtIndex:(long long)arg1;

@end
