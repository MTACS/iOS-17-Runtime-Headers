
@protocol ICNotePreviewing <NSObject>

@required

- (id)initWithNote:(id <ICSearchIndexableNote>)arg1;
- (id)initWithNote:(id <ICSearchIndexableNote>)arg1 searchResult:(ICSearchResult *)arg2;
- (<ICSearchIndexableNote> *)note;
- (ICSearchResult *)searchResult;
- (void)setupPreview;
- (void)setupPreviewWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
