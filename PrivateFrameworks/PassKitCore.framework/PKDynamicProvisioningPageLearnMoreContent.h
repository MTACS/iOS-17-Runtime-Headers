
@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying> {
    NSString * _body;
    NSString * _businessChatButtonTitle;
    NSString * _businessChatIntentName;
    NSString * _buttonTitle;
    NSURL * _buttonURL;
    NSString * _subtitle;
    NSString * _termsIdentifier;
    NSString * _title;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *businessChatButtonTitle;
@property (nonatomic, copy) NSString *businessChatIntentName;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSURL *buttonURL;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *termsIdentifier;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)businessChatButtonTitle;
- (id)businessChatIntentName;
- (id)buttonTitle;
- (id)buttonURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBusinessChatButtonTitle:(id)arg1;
- (void)setBusinessChatIntentName:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setButtonURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)termsIdentifier;
- (id)title;

@end
