
@interface EKEventDetailOrganizerCell : EKEventDetailCell {
    bool  _hideDisclosureIndicator;
    UILabel * _organizerLabel;
    NSString * _organizerName;
    <EKIdentityProtocol> * _organizerOverride;
    EKUILabeledAvatarView * _organizerView;
    UILabel * _titleView;
}

@property (nonatomic) bool hideDisclosureIndicator;

+ (id)_organizerFont;
+ (id)_titleFont;

- (void).cxx_destruct;
- (id)_organizerLabel;
- (id)_organizerView;
- (id)_titleView;
- (void)_updateDisclosureIndicator;
- (bool)hideDisclosureIndicator;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 organizerOverride:(id)arg3;
- (void)setHideDisclosureIndicator:(bool)arg1;
- (bool)shouldDisplayForEvent;
- (bool)update;

@end
