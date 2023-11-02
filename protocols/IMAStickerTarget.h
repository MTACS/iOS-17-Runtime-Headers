
@protocol IMAStickerTarget <NSObject>

@required

- (void)addSticker:(IMASticker *)arg1;
- (void)addSticker:(IMASticker *)arg1 atDropTarget:(IMADropTarget *)arg2;

@optional

- (void)didBeginDraggingSticker;
- (void)didDragStickerToTarget:(IMADropTarget *)arg1 outsideSwitcher:(bool)arg2;
- (void)didEndDraggingSticker;
- (bool)isDropTargetValid:(IMADropTarget *)arg1;
- (void)overrideDropPointWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGPoint { double x1; double x2; }, void*

@end
