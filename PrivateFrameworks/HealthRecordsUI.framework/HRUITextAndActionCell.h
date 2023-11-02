
@interface HRUITextAndActionCell : UITableViewCell {
    void actionButton;
    void actionTitle;
    void explanation;
    void explanationLabel;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *explanation;

- (void).cxx_destruct;
- (id)actionButton;
- (id)actionTitle;
- (id)explanation;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setActionTitle:(id)arg1;
- (void)setExplanation:(id)arg1;

@end
