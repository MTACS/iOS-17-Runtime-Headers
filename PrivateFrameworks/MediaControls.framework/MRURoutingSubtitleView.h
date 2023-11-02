
@interface MRURoutingSubtitleView : UIView <MRUVisualStylingProviderObserver> {
    MRUEqualizerView * _equalizerView;
    UIImage * _icon;
    UIImageView * _iconImageView;
    long long  _state;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _text;
    UILabel * _textLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MRUEqualizerView *equalizerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic) long long state;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (id)equalizerView;
- (id)icon;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEqualizerView:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (id)stylingProvider;
- (id)text;
- (id)textLabel;
- (void)updateContentSizeCategory;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
