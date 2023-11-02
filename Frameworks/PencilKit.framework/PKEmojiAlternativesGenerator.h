
@interface PKEmojiAlternativesGenerator : NSObject {
    NSXPCConnection * _connection;
    TIDocumentState * _documentState;
    NSArray * _localeIdentifiers;
    UITextRange * _rangeWithAlternatives;
    <TIEmojiAlternativesProtocol> * _remoteObject;
    <UITextInput> * _textInput;
    NSString * _textWithAlternatives;
    UIWKDocumentContext * _wkDocumentContext;
    <UIWKInteractionViewProtocol><UITextInput> * _wkInteractionView;
}

- (void).cxx_destruct;
- (void)_generateAlternatives;
- (void)_generateAlternativesForWebKit;
- (id)init;

@end
