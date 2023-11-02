
@interface WFRowOfIconsView : UIView {
    double  _height;
    NSMutableArray * _iconViews;
    unsigned long long  _maxNumberOfIcons;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) NSMutableArray *iconViews;
@property (nonatomic, readonly) unsigned long long maxNumberOfIcons;
@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (double)height;
- (id)iconViews;
- (id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned long long)maxNumberOfIcons;
- (void)rebuildSubviewsForItems:(id)arg1;
- (void)setHomeIcons:(id)arg1;
- (void)setIcons:(id)arg1;
- (id)stackView;

@end
