
@interface CKDetailsLocationShareCell : CKTranscriptDetailsResizableCell {
    CKStandardButton * _button;
    UIMenu * _menu;
    double  _offerTimeRemaining;
    bool  _showOfferTimeRemaining;
    UILabel * _timeRemainingLabel;
}

@property (nonatomic, retain) CKStandardButton *button;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic) double offerTimeRemaining;
@property (nonatomic) bool showOfferTimeRemaining;
@property (nonatomic, retain) UILabel *timeRemainingLabel;

+ (id)identifier;

- (void).cxx_destruct;
- (id)button;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)menu;
- (double)offerTimeRemaining;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setOfferTimeRemaining:(double)arg1;
- (void)setShowOfferTimeRemaining:(bool)arg1;
- (void)setTimeRemainingLabel:(id)arg1;
- (bool)showOfferTimeRemaining;
- (id)timeRemainingLabel;
- (id)timeStringForTimeInterval:(double)arg1;

@end
