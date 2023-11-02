
@interface TISmartInsertDeleteController : NSObject {
    bool  _enabled;
    TITextInputTraits * _textInputTraits;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) TITextInputTraits *textInputTraits;

- (void).cxx_destruct;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2;
- (unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2;
- (id)initWithTextInputTraits:(id)arg1;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long*)arg2 outAfterLength:(unsigned long long*)arg3;
- (void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id*)arg3 outAfterString:(id*)arg4;
- (id)textInputTraits;

@end
