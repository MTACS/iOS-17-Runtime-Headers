
@interface CDPUICustodianInstructionsViewModel : NSObject <NSCopying> {
    CDPEscapeOption * _continueOption;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    NSString * _footerText;
    NSString * _instructionHeader;
    NSString * _instructions;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) CDPEscapeOption *continueOption;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (nonatomic, copy) NSString *footerText;
@property (nonatomic, copy) NSString *instructionHeader;
@property (nonatomic, copy) NSString *instructions;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)continueOption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)escapeOffer;
- (id)footerText;
- (id)instructionHeader;
- (id)instructions;
- (void)setContinueOption:(id)arg1;
- (void)setEscapeOffer:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setInstructionHeader:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
