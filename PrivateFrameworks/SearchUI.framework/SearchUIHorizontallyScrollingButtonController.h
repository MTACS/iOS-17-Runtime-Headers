
@interface SearchUIHorizontallyScrollingButtonController : NSObject {
    UIButton * _button;
    SearchUICardSectionRowModel * _cardSectionRowModel;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    bool  _scrollsWithoutStoppingAtBoundaries;
    double  _spacing;
    SearchUIImageView * _thumbnailView;
    UIView * _view;
    bool  _wantsSeparators;
    double  _width;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) SearchUICardSectionRowModel *cardSectionRowModel;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (nonatomic) bool scrollsWithoutStoppingAtBoundaries;
@property (nonatomic) double spacing;
@property (nonatomic, retain) SearchUIImageView *thumbnailView;
@property (nonatomic, retain) UIView *view;
@property (nonatomic) bool wantsSeparators;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)button;
- (id)cardSectionRowModel;
- (id)feedbackDelegate;
- (bool)scrollsWithoutStoppingAtBoundaries;
- (void)setButton:(id)arg1;
- (void)setCardSectionRowModel:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setScrollsWithoutStoppingAtBoundaries:(bool)arg1;
- (void)setSpacing:(double)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWantsSeparators:(bool)arg1;
- (void)setWidth:(double)arg1;
- (double)spacing;
- (id)thumbnailView;
- (id)view;
- (bool)wantsSeparators;
- (double)width;

@end
