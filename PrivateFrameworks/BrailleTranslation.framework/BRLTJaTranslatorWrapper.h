
@interface BRLTJaTranslatorWrapper : NSObject {
    <BRLTBrailleTranslationDelegateProtocol> * _translationDelegate;
}

- (void).cxx_destruct;
- (id)arrayFromData:(id)arg1;
- (id)brailleForText:(id)arg1;
- (id)initWithTranslationDelegate:(id)arg1;
- (id)textForBraille:(id)arg1;

@end
