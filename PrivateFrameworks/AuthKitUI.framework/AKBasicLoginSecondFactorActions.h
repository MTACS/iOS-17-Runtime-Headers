
@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying> {
    id /* block */  _ak_cancelAction;
    id /* block */  _codeEnteredAction;
    id /* block */  _regenerateCodeAction;
}

@property (nonatomic, copy) id /* block */ ak_cancelAction;
@property (nonatomic, copy) id /* block */ codeEnteredAction;
@property (nonatomic, copy) id /* block */ regenerateCodeAction;

- (void).cxx_destruct;
- (id /* block */)ak_cancelAction;
- (id /* block */)codeEnteredAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)regenerateCodeAction;
- (void)setAk_cancelAction:(id /* block */)arg1;
- (void)setCodeEnteredAction:(id /* block */)arg1;
- (void)setRegenerateCodeAction:(id /* block */)arg1;

@end
