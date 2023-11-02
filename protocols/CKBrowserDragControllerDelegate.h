
@protocol CKBrowserDragControllerDelegate <NSObject>

@required

- (bool)dragManager:(CKBrowserDragManager *)arg1 canPeelItem:(id)arg2;
- (bool)dragManager:(CKBrowserDragManager *)arg1 canRotateItem:(id)arg2;
- (bool)dragManager:(CKBrowserDragManager *)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(CKBrowserDragManager *)arg1 didDragItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;
- (bool)dragManager:(CKBrowserDragManager *)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;

@optional

- (void)dragManager:(CKBrowserDragManager *)arg1 didBeginDraggingItem:(id)arg2;

@end
