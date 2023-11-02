
@interface SFDynamicButtonVisibilityFeedback : SFFeedback {
    NSArray * _buttons;
    SFCardSection * _cardSection;
}

@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) SFCardSection *cardSection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttons;
- (id)cardSection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 buttons:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCardSection:(id)arg1;

@end
