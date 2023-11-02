
@protocol _UIDruidSourceConnection <NSObject>

@required

- (PBItemCollection *)addItems:(NSArray *)arg1 withOldItemCollection:(PBItemCollection *)arg2;
- (void)beginDragWithConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UIDraggingBeginningSessionConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, PBItemCollection *, void*
- (id /* block */)canHandOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, NSArray *, unsigned int*, unsigned long long*, void*, id, SEL
- (void)cancelDrag;
- (id /* block */)dataTransferFinishedBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)dirtyItems:(NSArray *)arg1;
- (id /* block */)dragCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, long long, unsigned long long, void*, id, SEL
- (void)dragDidExitApp;
- (id /* block */)dragPreviewProviderBlock:(void *)arg1; // needs 1 arg types, found 12: id /* block */, NSIndexSet *, id /* block */, void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, void*, id, SEL
- (id /* block */)handOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, id, SEL
- (bool)isCancelled;
- (void)setCanHandOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSArray *, unsigned int*, unsigned long long*, void*
- (void)setDataTransferFinishedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDragCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, unsigned long long, void*
- (void)setDragPreviewProviderBlock:(void *)arg1; // needs 1 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexSet *, id /* block */, void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, void*
- (void)setHandOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*
- (void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(bool)arg3;

@end
