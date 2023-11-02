
@interface PKDataDetectorView : PKDetectionView {
    NSArray * _allItems;
    NSDictionary * _dataDetectorContext;
    PKDataDetectorItem * _dataDetectorItem;
}

@property (nonatomic, copy) NSArray *allItems;
@property (nonatomic, retain) NSDictionary *dataDetectorContext;
@property (nonatomic, retain) PKDataDetectorItem *dataDetectorItem;

- (void).cxx_destruct;
- (void)_highlightWithCompletion:(id /* block */)arg1;
- (double)_underlineThickness;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)allItems;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)dataDetectorContext;
- (id)dataDetectorItem;
- (id)initWithDataDetectorItem:(id)arg1 allItems:(id)arg2;
- (id)item;
- (void)setAllItems:(id)arg1;
- (void)setDataDetectorContext:(id)arg1;
- (void)setDataDetectorItem:(id)arg1;
- (void)tapHandler:(id)arg1;

@end
