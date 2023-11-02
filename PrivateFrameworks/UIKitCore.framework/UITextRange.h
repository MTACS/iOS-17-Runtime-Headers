
@interface UITextRange : NSObject {
    <NSObject> * _attachmentRange;
}

@property (getter=_attachmentRange, setter=_setAttachmentRange:, nonatomic, retain) <NSObject> *_attachmentRange;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) UITextPosition *end;
@property (getter=_isCaret, nonatomic, readonly) bool isCaret;
@property (getter=_isImpl, nonatomic, readonly) UITextRangeImpl *isImpl;
@property (getter=_isRanged, nonatomic, readonly) bool isRanged;
@property (nonatomic, readonly) UITextPosition *start;
@property (getter=_ic_textFindingResult, setter=_ic_setTextFindingResult:, nonatomic, retain) ICTextFindingResult *textFindingResult;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_asNSRangeRelativeToDocument:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_asNSRangeRelativeToDocument:(id)arg1 relativeToCurrentLine:(bool)arg2;
- (id)_attachmentRange;
- (bool)_isCaret;
- (id)_isImpl;
- (bool)_isRanged;
- (void)_setAttachmentRange:(id)arg1;
- (id)end;
- (bool)isEmpty;
- (id)start;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (void)_ic_setTextFindingResult:(id)arg1;
- (id)_ic_textFindingResult;

@end
