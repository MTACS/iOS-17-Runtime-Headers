
@interface TLKContentsContainerView : TLKStackView {
    NSMutableArray * _contentsViews;
}

@property (nonatomic, retain) NSMutableArray *contentsViews;

- (void).cxx_destruct;
- (id)contentsViews;
- (id)init;
- (void)setContentsViews:(id)arg1;
- (void)updateWithContents:(id)arg1;

@end
