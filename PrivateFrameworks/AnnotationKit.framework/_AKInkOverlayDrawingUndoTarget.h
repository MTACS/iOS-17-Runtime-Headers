
@interface _AKInkOverlayDrawingUndoTarget : NSObject {
    AKPageController * _pageController;
}

@property AKPageController *pageController;

- (void).cxx_destruct;
- (id)initWithPageController:(id)arg1;
- (id)pageController;
- (void)performUndo:(id)arg1;
- (void)setPageController:(id)arg1;

@end
