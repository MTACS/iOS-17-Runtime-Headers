
@interface PKTextInputWindowFirstResponder : NSObject {
    bool  _disableInputAssistant;
    bool  _editableTextInput;
    UITextInputAssistantItem * _inputAssistantItem;
    bool  _isVisible;
    bool  _notesHandwritingResponder;
    long long  _textInputSource;
}

@property (nonatomic) bool disableInputAssistant;
@property (getter=isEditableTextInput, nonatomic, readonly) bool editableTextInput;
@property (getter=isEditableTextInputWithPencilTextInputSource, nonatomic, readonly) bool editableTextInputWithPencilTextInputSource;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (getter=isVisible, nonatomic, readonly) bool isVisible;
@property (getter=isNotesHandwritingResponder, nonatomic) bool notesHandwritingResponder;
@property (getter=isPencilTextInputSource, nonatomic, readonly) bool pencilTextInputSource;
@property (nonatomic, readonly) long long textInputSource;

- (void).cxx_destruct;
- (bool)disableInputAssistant;
- (id)initWithIsVisible:(bool)arg1 isEditableTextInput:(bool)arg2 textInputSource:(long long)arg3 inputAssistantItem:(id)arg4;
- (id)inputAssistantItem;
- (bool)isEditableTextInput;
- (bool)isEditableTextInputWithPencilTextInputSource;
- (bool)isNotesHandwritingResponder;
- (bool)isPencilTextInputSource;
- (bool)isVisible;
- (void)setDisableInputAssistant:(bool)arg1;
- (void)setNotesHandwritingResponder:(bool)arg1;
- (long long)textInputSource;

@end
