
@interface CNSharingProfileOnboardingAddressingGrammarCell : UITableViewCell {
    UILabel * _addressingGrammarLabel;
}

@property (nonatomic, retain) UILabel *addressingGrammarLabel;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)addressingGrammarLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAddressingGrammarLabel:(id)arg1;

@end
