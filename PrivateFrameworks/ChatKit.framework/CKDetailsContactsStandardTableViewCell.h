
@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell {
    NSMutableArray * _visibleButtons;
}

@property (nonatomic, retain) NSMutableArray *visibleButtons;

+ (double)estimatedHeight;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)_hideAllButtons;
- (void)_updateVisibleButtons;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setShowsLocation:(bool)arg1;
- (void)setShowsTUConversationStatus:(bool)arg1;
- (void)setVisibleButtons:(id)arg1;
- (id)visibleButtons;

@end
