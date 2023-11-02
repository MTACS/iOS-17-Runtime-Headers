
@interface PKTextInputElementContent : NSObject {
    <UITextInput> * __textInput;
    NSString * __webComposedContextString;
    UIWKDocumentContext * __webDocumentContext;
    UIWKDocumentContext * __webDocumentCurrentLineContext;
    UIView<UIWKInteractionViewProtocol> * __webDocumentSourceView;
    <UITextInput> * __webTextInput;
    long long  _dataLoadedState;
    PKTextInputElement * _element;
    UITextInputTraits * _textInputTraits;
}

- (void).cxx_destruct;
- (id)description;

@end
