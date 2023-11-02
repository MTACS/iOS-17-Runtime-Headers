
@interface FIUIPushyLabelCharacter : NSObject {
    UIView * _renderedView;
    NSAttributedString * _sourceText;
}

@property (retain) UIView *renderedView;
@property (retain) NSAttributedString *sourceText;

- (void).cxx_destruct;
- (id)renderedView;
- (void)setRenderedView:(id)arg1;
- (void)setSourceText:(id)arg1;
- (id)sourceText;

@end
