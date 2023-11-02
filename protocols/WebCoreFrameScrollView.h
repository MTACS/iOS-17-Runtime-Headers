
@protocol WebCoreFrameScrollView

@required

- (struct CGPoint { double x1; double x2; })scrollOrigin;
- (void)scrollingModes:(unsigned char*)arg1 vertical:(unsigned char*)arg2;
- (void)setScrollBarsSuppressed:(bool)arg1 repaintOnUnsuppress:(bool)arg2;
- (void)setScrollOrigin:(struct CGPoint { double x1; double x2; })arg1 updatePositionAtAll:(bool)arg2 immediately:(bool)arg3;
- (void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(bool)arg3;

@end
