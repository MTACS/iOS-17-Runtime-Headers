
@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {
    SearchUIImageView * _pictureView;
}

@property (nonatomic, retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIImageView *pictureView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)pictureView;
- (void)setPictureView:(id)arg1;
- (id)setupContentView;

@end
