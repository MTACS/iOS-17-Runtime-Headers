
@interface CPSPausedCardView : UIView <CPSCardPlatterProviding> {
    CPSCardPlatterView * _cardPlatterView;
    UIActivityIndicatorView * _spinner;
    UILabel * _title;
}

@property (nonatomic, retain) CPSCardPlatterView *cardPlatterView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *title;

- (void).cxx_destruct;
- (id)cardPlatterView;
- (id)initWithReason:(unsigned long long)arg1 title:(id)arg2 backgroundColor:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setCardPlatterView:(id)arg1;
- (id)spinner;
- (id)title;

@end
