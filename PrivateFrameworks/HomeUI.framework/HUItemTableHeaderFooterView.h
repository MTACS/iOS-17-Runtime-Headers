
@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView {
    NSLayoutConstraint * _bottomSpacingConstraint;
    NSArray * _constraints;
    bool  _includeBottomSpacing;
    UITextView * _messageTextView;
}

@property (nonatomic, copy) NSAttributedString *attributedMessage;
@property (nonatomic, retain) NSLayoutConstraint *bottomSpacingConstraint;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) bool includeBottomSpacing;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UITextView *messageTextView;
@property (nonatomic) unsigned long long numberOfLines;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (double)_bottomSpacing;
- (id)attributedMessage;
- (id)bottomSpacingConstraint;
- (id)constraints;
- (bool)includeBottomSpacing;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)message;
- (id)messageTextView;
- (unsigned long long)numberOfLines;
- (void)setAttributedMessage:(id)arg1;
- (void)setBottomSpacingConstraint:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setIncludeBottomSpacing:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)updateConstraints;

@end
