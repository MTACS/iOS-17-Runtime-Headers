
@protocol _UIContentViewComponentDescribing <NSObject>

@required

- (id /* block */)_primaryTextFrameDidChangeHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_primaryTextLayoutFrame;
- (NSLayoutRect *)_primaryTextLayoutRect;
- (void)_setPrimaryTextFrameDidChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
