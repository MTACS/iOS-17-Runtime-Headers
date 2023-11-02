
@protocol PUEditingExtensionUndoTarget <NSObject>

@required

- (void)performRedo;
- (void)performUndo;

@end
