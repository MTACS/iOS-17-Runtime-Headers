
@interface CKTranscriptStickerDropProposal : NSObject {
    UIDragItem * _dragItem;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previewCenter;
    NSIndexPath * _targetBalloonIndex;
}

@property (nonatomic, retain) UIDragItem *dragItem;
@property (nonatomic) struct CGPoint { double x1; double x2; } previewCenter;
@property (nonatomic, retain) NSIndexPath *targetBalloonIndex;

- (void).cxx_destruct;
- (id)dragItem;
- (id)initWithDragItem:(id)arg1 previewCenter:(struct CGPoint { double x1; double x2; })arg2 targetBalloonIndex:(id)arg3;
- (struct CGPoint { double x1; double x2; })previewCenter;
- (void)setDragItem:(id)arg1;
- (void)setPreviewCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTargetBalloonIndex:(id)arg1;
- (id)targetBalloonIndex;

@end
