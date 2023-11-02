
@interface HRAccountTimelineButtonCell : UITableViewCell {
    void $__lazy_storage_$_buttonLabel;
    void $__lazy_storage_$_containerView;
    void $__lazy_storage_$_explanationLabel;
    void $__lazy_storage_$_separatorView;
    void buttonText;
    void customConstraints;
    void explanationText;
    void roundBottomCorners;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, copy) NSString *explanationText;
@property (nonatomic) bool roundBottomCorners;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)buttonText;
- (id)explanationText;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (bool)roundBottomCorners;
- (void)setButtonText:(id)arg1;
- (void)setExplanationText:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setRoundBottomCorners:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
