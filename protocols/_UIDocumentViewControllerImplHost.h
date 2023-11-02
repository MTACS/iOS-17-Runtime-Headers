
@protocol _UIDocumentViewControllerImplHost <NSObject>

@required

- (void)documentDidChange;
- (void)documentDidOpen;
- (void)navigationItemDidUpdate;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;

@end
