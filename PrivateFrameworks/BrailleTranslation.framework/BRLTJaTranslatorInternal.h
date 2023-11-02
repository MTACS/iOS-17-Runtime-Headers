
@interface BRLTJaTranslatorInternal : NSObject {
    void translationDelegate;
    void translationWrapper;
}

@property (nonatomic, readonly) <BRLTBrailleTranslationDelegateProtocol> *translationDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTranslationDelegate:(id)arg1;
- (id)translationDelegate;

@end
