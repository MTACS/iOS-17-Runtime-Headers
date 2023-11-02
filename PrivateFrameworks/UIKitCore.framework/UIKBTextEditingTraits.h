
@interface UIKBTextEditingTraits : NSObject {
    bool  _canCopy;
    bool  _canCut;
    bool  _canMoveCursorLeft;
    bool  _canMoveCursorRight;
    bool  _canPaste;
    bool  _canToggleBoldface;
    bool  _canToggleItalics;
    bool  _canToggleUnderline;
    UIResponder * _firstResponder;
    bool  _isBold;
    bool  _isItalicized;
    bool  _isUnderlined;
    bool  _supportStyling;
}

@property (nonatomic, readonly) bool canCopy;
@property (nonatomic) bool canCut;
@property (nonatomic, readonly) bool canMoveCursorLeft;
@property (nonatomic, readonly) bool canMoveCursorRight;
@property (nonatomic, readonly) bool canPaste;
@property (nonatomic, readonly) bool canToggleBoldface;
@property (nonatomic, readonly) bool canToggleItalics;
@property (nonatomic, readonly) bool canToggleUnderline;
@property (nonatomic, readonly) UIResponder *firstResponder;
@property (nonatomic, readonly) bool isBold;
@property (nonatomic, readonly) bool isItalicized;
@property (nonatomic, readonly) bool isUnderlined;
@property (nonatomic, readonly) bool supportStyling;

+ (id)traitsForEditingInteractionWithFirstResponder:(id)arg1 canRespondBlock:(id /* block */)arg2 keyMaskFlags:(unsigned long long)arg3;
+ (id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)canCopy;
- (bool)canCut;
- (bool)canMoveCursorLeft;
- (bool)canMoveCursorRight;
- (bool)canPaste;
- (bool)canToggleBoldface;
- (bool)canToggleItalics;
- (bool)canToggleUnderline;
- (id)firstResponder;
- (id)initWithResponder:(id)arg1 canRespondBlock:(id /* block */)arg2 keyMaskFlags:(unsigned long long)arg3 sender:(id)arg4;
- (bool)isBold;
- (bool)isItalicized;
- (bool)isUnderlined;
- (void)setCanCut:(bool)arg1;
- (bool)supportStyling;

@end
