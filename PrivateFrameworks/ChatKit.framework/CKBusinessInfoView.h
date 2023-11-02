
@interface CKBusinessInfoView : UIView {
    <CKBusinessInfoViewDelegate> * _delegate;
    NSString * _descriptionText;
    UILabel * _descriptionTextLabel;
    NSString * _greetingText;
    UILabel * _greetingTextLabel;
    CKStandardButton * _infoButton;
    long long  _layoutType;
}

@property (nonatomic) <CKBusinessInfoViewDelegate> *delegate;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) UILabel *descriptionTextLabel;
@property (nonatomic, retain) NSString *greetingText;
@property (nonatomic, retain) UILabel *greetingTextLabel;
@property (nonatomic, readonly) bool hasValidGreeting;
@property (nonatomic, retain) CKStandardButton *infoButton;
@property (nonatomic) long long layoutType;

- (void).cxx_destruct;
- (id)delegate;
- (id)descriptionText;
- (id)descriptionTextLabel;
- (id)greetingText;
- (id)greetingTextLabel;
- (bool)hasValidGreeting;
- (id)infoButton;
- (void)infoButtonTapped:(id)arg1;
- (id)initWithLayoutType:(long long)arg1;
- (void)layoutSubviews;
- (long long)layoutType;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionTextLabel:(id)arg1;
- (void)setGreetingText:(id)arg1;
- (void)setGreetingTextLabel:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setup;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
