
@interface WKQuirkyNSUndoManager : NSUndoManager {
    WKContentView * _contentView;
}

@property (readonly) WKContentView *contentView;

- (void).cxx_destruct;
- (bool)canRedo;
- (bool)canUndo;
- (id)contentView;
- (id)initWithContentView:(id)arg1;
- (void)redo;
- (void)undo;

@end
