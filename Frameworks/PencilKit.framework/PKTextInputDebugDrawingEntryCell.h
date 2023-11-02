
@interface PKTextInputDebugDrawingEntryCell : UITableViewCell {
    PKDrawing * _drawing;
    UIImageView * _drawingImageView;
}

@property (nonatomic, retain) PKDrawing *drawing;

- (void).cxx_destruct;
- (void)_updateDrawingView;
- (id)drawing;
- (void)setDrawing:(id)arg1;

@end
