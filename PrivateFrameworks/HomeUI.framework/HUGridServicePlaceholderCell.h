
@interface HUGridServicePlaceholderCell : HUGridServiceCell {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _coloredDescriptionLabel;
    UIVisualEffectView * _descriptionLabelEffectView;
    HUIconView * _iconView;
    HUGridServiceCellTextView * _serviceTextView;
    bool  _shouldShowRoomName;
    bool  _showingUpdatingState;
}

- (void).cxx_destruct;
- (void)_setupServiceCell;
- (id)_textConfiguration;
- (void)_updateSecondaryContentDisplayStyle;
- (id)activityIndicator;
- (id)coloredDescriptionLabel;
- (id)descriptionLabelEffectView;
- (void)displayStyleDidChange;
- (unsigned long long)iconDisplayStyle;
- (id)iconView;
- (void)layoutSubviews;
- (id)serviceTextView;
- (void)setActivityIndicator:(id)arg1;
- (void)setColoredDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelEffectView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setServiceTextView:(id)arg1;
- (void)setShouldShowRoomName:(bool)arg1;
- (void)setShowingUpdatingState:(bool)arg1;
- (bool)shouldShowRoomName;
- (bool)showingUpdatingState;
- (void)updateUIWithAnimation:(bool)arg1;

@end
