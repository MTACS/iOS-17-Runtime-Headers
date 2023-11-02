
@interface HUCollectionTextViewCell : UICollectionViewListCell {
    HUTappableTextView * _messageTextView;
}

@property (nonatomic, retain) HUTappableTextView *messageTextView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageTextView;
- (void)prepareForReuse;
- (void)setContentConfiguration:(id)arg1;
- (void)setMessageTextView:(id)arg1;

@end
