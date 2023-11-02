
@protocol EMSearchableIndexInterface <NSObject>

@required

- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reindexSearchableItemsWithIdentifiers:(void *)arg1 acknowledgementHandler:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
