
@interface CDPUICodeEntryViewModel : NSObject <NSCopying> {
    id /* block */  _codeEnteredAction;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    NSString * _promptMessage;
    NSString * _promptTitle;
}

@property (nonatomic, copy) id /* block */ codeEnteredAction;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (nonatomic, copy) NSString *promptMessage;
@property (nonatomic, copy) NSString *promptTitle;

- (void).cxx_destruct;
- (id /* block */)codeEnteredAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)escapeOffer;
- (id)promptMessage;
- (id)promptTitle;
- (void)setCodeEnteredAction:(id /* block */)arg1;
- (void)setEscapeOffer:(id)arg1;
- (void)setPromptMessage:(id)arg1;
- (void)setPromptTitle:(id)arg1;

@end
