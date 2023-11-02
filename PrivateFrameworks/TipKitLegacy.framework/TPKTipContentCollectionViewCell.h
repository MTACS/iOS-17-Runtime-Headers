
@interface TPKTipContentCollectionViewCell : UICollectionViewCell <TPKTipContentReusableView> {
    void tipView;
}

@property (nonatomic, readonly) TPKContentView *tipContentView;
@property (nonatomic, retain) TPKContentView *tipView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setContent:(id)arg1 contentController:(id)arg2;
- (void)setTipView:(id)arg1;
- (id)tipContentView;
- (id)tipView;

@end
