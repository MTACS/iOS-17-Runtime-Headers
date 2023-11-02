
@interface SFAccountManagerPlatterWithDeclineButtonCell : UITableViewCell {
    UIActivityIndicatorView * _activityIndicator;
    UIButton * _declineButton;
    <SFAccountManagerPlatterWithDeclineButtonCellDelegate> * _delegate;
    UIImageView * _iconImageView;
    unsigned long long  _iconLeadingSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    unsigned long long  _iconTrailingSpace;
    NSLayoutConstraint * _imageViewHeightConstraint;
    NSLayoutConstraint * _imageViewWidthConstraint;
    UIStackView * _labelStackView;
    bool  _showingActivityIndicator;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) <SFAccountManagerPlatterWithDeclineButtonCellDelegate> *delegate;
@property (getter=isShowingActivityIndicator, nonatomic) bool showingActivityIndicator;

+ (unsigned long long)contentInset;

- (void).cxx_destruct;
- (void)_declineButtonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_declineButtonSize;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 iconSize:(struct CGSize { double x1; double x2; })arg3 iconLeadingSpace:(unsigned long long)arg4 iconTrailingSpace:(unsigned long long)arg5;
- (bool)isShowingActivityIndicator;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setShowingActivityIndicator:(bool)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3 shouldShowDeclineButton:(bool)arg4;

@end
