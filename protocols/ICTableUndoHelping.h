
@protocol ICTableUndoHelping

@required

- (NSMapTable *)coalescingUndoGroupForStringDelegate;
- (void)setTableSelection:(ICTableAttachmentSelection *)arg1;
- (bool)shouldPreventUndoCommands;
- (ICTableAttachmentSelection *)tableSelection;
- (NSUndoManager *)undoManager;
- (ICTableUndoTarget *)undoTarget;

@end
