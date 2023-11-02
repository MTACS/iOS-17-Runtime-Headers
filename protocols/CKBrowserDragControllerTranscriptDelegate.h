
@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>

@required

- (void)dragManager:(CKBrowserDragManager *)arg1 draggedItemWithTarget:(CKBrowserDragControllerTarget *)arg2;
- (int)dragManager:(CKBrowserDragManager *)arg1 dropAreaForDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dragManagerDidBeginDragging:(CKBrowserDragManager *)arg1;
- (void)dragManagerDidEndDragging:(CKBrowserDragManager *)arg1;

@optional

- (void)dragManager:(void *)arg1 overrideDropPointForTarget:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CKBrowserDragManager *, CKBrowserDragControllerTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGPoint { double x1; double x2; }, void*
- (UIView *)dragManagerTargetView:(CKBrowserDragManager *)arg1;

@end
