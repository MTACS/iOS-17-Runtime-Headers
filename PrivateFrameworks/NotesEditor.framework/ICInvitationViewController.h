
@interface ICInvitationViewController : ICNAViewController {
    SWAttributionView * _attributionView;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _backgroundInsets;
    ICTextBackgroundView * _backgroundView;
    id /* block */  _didTapViewButton;
    SWHighlight * _highlight;
    ICInvitation * _invitation;
    UIImageView * _invitationImageView;
    UIButton * _largeViewButton;
    bool  _showsActivityIndicator;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIButton * _viewButton;
}

@property (nonatomic) SWAttributionView *attributionView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic) ICTextBackgroundView *backgroundView;
@property (nonatomic, copy) id /* block */ didTapViewButton;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic, retain) ICInvitation *invitation;
@property (nonatomic) UIImageView *invitationImageView;
@property (nonatomic) UIButton *largeViewButton;
@property (nonatomic) bool showsActivityIndicator;
@property (nonatomic) UILabel *subtitleLabel;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UIButton *viewButton;

- (void).cxx_destruct;
- (id)attributionView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)backgroundView;
- (void)dealloc;
- (id /* block */)didTapViewButton;
- (id)highlight;
- (id)init;
- (id)invitation;
- (id)invitationImageView;
- (id)largeViewButton;
- (void)setAttributionView:(id)arg1;
- (void)setBackgroundInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDidTapViewButton:(id /* block */)arg1;
- (void)setHighlight:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setInvitationImageView:(id)arg1;
- (void)setLargeViewButton:(id)arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewButton:(id)arg1;
- (bool)showsActivityIndicator;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateButtonConfiguration;
- (id)viewButton;
- (void)viewButtonDidTap:(id)arg1;
- (void)viewDidLoad;

@end
