
@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    WAKClipView * _contentView;
    WAKView * _documentView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollOrigin;
    id  delegate;
}

@property (nonatomic) id delegate;

- (void).cxx_destruct;
- (void)_adjustScrollers;
- (bool)_selfHandleEvent:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)documentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentVisibleRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exposedContentRect;
- (bool)hasHorizontalScroller;
- (bool)hasVerticalScroller;
- (float)horizontalLineScroll;
- (unsigned char)horizontalScrollingMode;
- (bool)inProgrammaticScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (struct CGPoint { double x1; double x2; })scrollOrigin;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollWheel:(id)arg1;
- (void)scrollingModes:(unsigned char*)arg1 vertical:(unsigned char*)arg2;
- (void)setActualScrollPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setHasHorizontalScroller:(bool)arg1;
- (void)setHasVerticalScroller:(bool)arg1;
- (void)setHorizontalScrollingMode:(unsigned char)arg1;
- (void)setLineScroll:(float)arg1;
- (void)setScrollBarsSuppressed:(bool)arg1 repaintOnUnsuppress:(bool)arg2;
- (void)setScrollOrigin:(struct CGPoint { double x1; double x2; })arg1 updatePositionAtAll:(bool)arg2 immediately:(bool)arg3;
- (void)setScrollingMode:(unsigned char)arg1;
- (void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(bool)arg3;
- (void)setVerticalScrollingMode:(unsigned char)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredContentRect;
- (float)verticalLineScroll;
- (unsigned char)verticalScrollingMode;

@end
