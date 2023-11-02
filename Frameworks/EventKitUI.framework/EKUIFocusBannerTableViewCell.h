
@interface EKUIFocusBannerTableViewCell : UITableViewCell {
    NSArray * _constraints;
    <EKUIFocusBannerTableViewCellDelegate> * _delegate;
    UIButton * _focusFilterToggleButton;
    UIListContentView * _listContentView;
    bool  _on;
}

@property (nonatomic) <EKUIFocusBannerTableViewCellDelegate> *delegate;
@property (nonatomic) bool on;

- (void).cxx_destruct;
- (id)_configuration;
- (id)_focusFilterButtonConfiguration;
- (void)_tapped;
- (void)_updateView;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)on;
- (void)setDelegate:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
