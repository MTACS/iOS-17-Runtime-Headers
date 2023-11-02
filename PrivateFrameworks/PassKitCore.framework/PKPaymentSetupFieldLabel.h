
@interface PKPaymentSetupFieldLabel : PKPaymentSetupField {
    unsigned long long  _alingment;
    NSString * _businessChatButtonTitle;
    NSString * _businessChatIdentifier;
    NSString * _businessChatIntentName;
    NSString * _buttonTitle;
    NSString * _detailBody;
    NSString * _detailSubtitle;
    NSString * _detailTitle;
    NSArray * _links;
}

@property (nonatomic) unsigned long long alingment;
@property (nonatomic, copy) NSString *businessChatButtonTitle;
@property (nonatomic, copy) NSString *businessChatIdentifier;
@property (nonatomic, copy) NSString *businessChatIntentName;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *detailBody;
@property (nonatomic, copy) NSString *detailSubtitle;
@property (nonatomic, copy) NSString *detailTitle;
@property (nonatomic, copy) NSArray *links;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)_commonUpdate;
- (unsigned long long)alingment;
- (id)businessChatButtonTitle;
- (id)businessChatIdentifier;
- (id)businessChatIntentName;
- (id)buttonTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailBody;
- (id)detailSubtitle;
- (id)detailTitle;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)links;
- (void)setAlingment:(unsigned long long)arg1;
- (void)setBusinessChatButtonTitle:(id)arg1;
- (void)setBusinessChatIdentifier:(id)arg1;
- (void)setBusinessChatIntentName:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setDetailBody:(id)arg1;
- (void)setDetailSubtitle:(id)arg1;
- (void)setDetailTitle:(id)arg1;
- (void)setLinks:(id)arg1;
- (id)submissionString;
- (bool)submissionStringMeetsAllRequirements;
- (id)title;
- (void)updateWithAttribute:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end
