
@interface MKIncidentDetailCell : MKTableViewCell <UITextViewDelegate> {
    UITextView * _descriptionLabel;
    NSLayoutConstraint * _descriptionLastBaselineToBottomConstraint;
    UIImage * _icon;
    UIImageView * _iconImageView;
    NSDate * _lastUpdated;
    NSLayoutConstraint * _lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    _MKUILabel * _lastUpdatedLabel;
    NSLayoutConstraint * _lastUpdatedLastBaselineToBottomConstraint;
    NSString * _title;
    NSLayoutConstraint * _titleFirstBaselineToTopConstraint;
    _MKUILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *incidentDescription;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_setConstraints;
- (void)_updateConstraintValues;
- (void)_updateLastUpdatedLabel;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)icon;
- (id)incidentDescription;
- (void)infoCardThemeChanged;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)lastUpdated;
- (void)setIcon:(id)arg1;
- (void)setIncidentDescription:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)title;
- (void)updateConstraints;

@end
