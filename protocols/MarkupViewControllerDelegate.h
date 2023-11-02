
@protocol MarkupViewControllerDelegate <NSObject>

@optional

- (void)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
- (void)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 didReadCGPDFDocument:(struct CGPDFDocument { }*)arg2;
- (bool)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 shouldOpenLinkAtURL:(NSURL *)arg2;
- (NSArray *)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controller:(id <MarkupViewControllerPrivateProtocol>)arg1 willWriteCGPDFDocument:(struct CGPDFDocument { }*)arg2 toContext:(struct CGContext { }*)arg3;
- (bool)controllerCanBecomeFirstResponder:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (bool)controllerCanShowWhileLocked:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (void)controllerDidChangeContent:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (void)controllerWantsToShowShareSheet:(id <MarkupViewControllerPrivateProtocol>)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customSketchOverlayInsets;
- (void)markupViewController:(id <MarkupViewControllerPrivateProtocol>)arg1 didChangeShowingSignaturesUI:(bool)arg2;
- (NSArray *)menuElementsForPage:(PDFPage *)arg1;

@end
