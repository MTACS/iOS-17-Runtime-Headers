
@interface BRLTJaTranslator : NSObject {
    BRLTJaTranslatorInternal * _underlyingObject;
}

@property (nonatomic, readonly) <BRLTBrailleTranslationDelegateProtocol> *translationDelegate;
@property (readonly) BRLTJaTranslatorInternal *underlyingObject;

- (void).cxx_destruct;
- (id)initWithTranslationDelegate:(id)arg1;
- (id)translationDelegate;
- (id)underlyingObject;

@end
