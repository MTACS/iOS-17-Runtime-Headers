
@interface DOCStackedThumbnailView : UIView {
    NSArray * _URLs;
    NSArray * _nodes;
    NSArray * _thumbnailImageViews;
    struct CGSize { 
        double width; 
        double height; 
    }  _topThumbnailSize;
}

@property (nonatomic, copy) NSArray *URLs;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, retain) NSArray *thumbnailImageViews;
@property (nonatomic) struct CGSize { double x1; double x2; } topThumbnailSize;

- (void).cxx_destruct;
- (id)URLs;
- (void)createThumbnailViewsWithCount:(unsigned long long)arg1 createViewForIndex:(id /* block */)arg2;
- (id)initWithTopThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)nodes;
- (void)setNodes:(id)arg1;
- (void)setThumbnailImageViews:(id)arg1;
- (void)setTopThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setURLs:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailImageViews;
- (struct CGSize { double x1; double x2; })topThumbnailSize;
- (void)updateNodes;
- (void)updateURLs;

@end
