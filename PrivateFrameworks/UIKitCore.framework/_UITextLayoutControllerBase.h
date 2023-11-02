
@interface _UITextLayoutControllerBase : NSObject {
    Class  _classicCanvasViewClass;
    bool  _documentObscured;
    _UITextInputControllerLayoutManagerConnection * _textInputControllerConnection;
    UITextRange * _unobscuredRange;
}

@property (getter=isDocumentObscured, nonatomic) bool documentObscured;
@property (nonatomic, readonly) NSTextContainer *firstTextContainer;
@property (nonatomic, retain) UITextRange *unobscuredRange;

- (void).cxx_destruct;
- (void)adoptTextInputController:(id)arg1;
- (void)detachFromTextInputController;
- (id)firstTextContainer;
- (bool)isDocumentObscured;
- (void)setDocumentObscured:(bool)arg1;
- (void)setUnobscuredRange:(id)arg1;
- (id)unobscuredRange;

@end
