
@interface AAUICodeEntryContext : NSObject <NSCopying> {
    id /* block */  _cancelEntryAction;
    id /* block */  _codeEnteredAction;
    id /* block */  _escapeAction;
    NSString * _escapeTitle;
    NSString * _promptMessage;
    NSString * _promptTitle;
}

@property (nonatomic, copy) id /* block */ cancelEntryAction;
@property (nonatomic, copy) id /* block */ codeEnteredAction;
@property (nonatomic, copy) id /* block */ escapeAction;
@property (nonatomic, copy) NSString *escapeTitle;
@property (nonatomic, copy) NSString *promptMessage;
@property (nonatomic, copy) NSString *promptTitle;

- (void).cxx_destruct;
- (id /* block */)cancelEntryAction;
- (id /* block */)codeEnteredAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)escapeAction;
- (id)escapeTitle;
- (id)promptMessage;
- (id)promptTitle;
- (void)setCancelEntryAction:(id /* block */)arg1;
- (void)setCodeEnteredAction:(id /* block */)arg1;
- (void)setEscapeAction:(id /* block */)arg1;
- (void)setEscapeTitle:(id)arg1;
- (void)setPromptMessage:(id)arg1;
- (void)setPromptTitle:(id)arg1;

@end
