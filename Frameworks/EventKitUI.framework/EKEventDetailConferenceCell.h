
@interface EKEventDetailConferenceCell : EKEventDetailCell {
    unsigned long long  _actionButtonType;
    UIView * _bottomSeparator;
    NSArray * _constraints;
    NSObject<ConferenceCellDelegate> * _delegate;
    UIListContentView * _listView;
    UIButton * _openURLButton;
    UIButton * _shareButton;
    UIView * _topSeparator;
}

@property (nonatomic) NSObject<ConferenceCellDelegate> *delegate;

- (void).cxx_destruct;
- (id)_buttonConfigForCurrentTime;
- (bool)_buttonsShouldUseSeparateLine;
- (void)_createConstraints;
- (void)_createViews;
- (id)_defaultListConfiguration;
- (void)_openURL;
- (double)_separatorHeight;
- (void)_share:(id)arg1;
- (void)_updateActionButtonWithType:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)tintColorDidChange;
- (bool)update;
- (void)updateListConfigWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

@end
