
@protocol _UIDruidDestinationConnection <NSObject>

@required

- (void)connect;
- (id /* block */)connectionBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, PBItemCollection *, NSArray *, unsigned long long, unsigned long long, void*, id, SEL
- (void)dirtyItems:(NSArray *)arg1;
- (id /* block */)dragEndBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)dragPreviewProviderBlock:(void *)arg1; // needs 1 arg types, found 12: id /* block */, NSIndexSet *, id /* block */, void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, void*, id, SEL
- (id /* block */)dropPerformBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, PBItemCollection *, NSArray *, NSArray *, unsigned int*, unsigned long long*, void*, id, SEL
- (void)enableKeyboardIfNeeded;
- (id /* block */)handOffDroppedItemsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, id, SEL
- (id)init;
- (id)initWithSessionIdentifier:(unsigned int)arg1 systemPolicy:(bool)arg2;
- (id /* block */)itemsAddedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, PBItemCollection *, void*, id, SEL
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (void)requestVisibleItems:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)sawDragEndEvent;
- (unsigned int)sessionIdentifier;
- (void)setConnectionBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBItemCollection *, NSArray *, unsigned long long, unsigned long long, void*
- (void)setDragEndBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDragPreviewProviderBlock:(void *)arg1; // needs 1 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexSet *, id /* block */, void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, void*
- (void)setDropPerformBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBItemCollection *, NSArray *, NSArray *, unsigned int*, unsigned long long*, void*
- (void)setHandOffDroppedItemsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*
- (void)setItemsAddedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBItemCollection *, void*
- (void)takePotentialDrop:(_DUIPotentialDrop *)arg1;

@end
