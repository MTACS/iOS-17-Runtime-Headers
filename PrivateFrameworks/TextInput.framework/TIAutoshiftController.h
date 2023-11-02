
@interface TIAutoshiftController : NSObject {
    bool  _enabled;
    TITextInputTraits * _textInputTraits;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) TITextInputTraits *textInputTraits;

- (void).cxx_destruct;
- (unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2;
- (id)initWithTextInputTraits:(id)arg1;
- (bool)isEnabled;
- (bool)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (id)textInputTraits;

@end
