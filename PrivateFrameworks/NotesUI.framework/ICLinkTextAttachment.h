
@interface ICLinkTextAttachment : ICInlineTextAttachment {
    <ICLinkEditorDelegate> * _linkDelegate;
    <ICLinkMenuDelegate> * _linkMenuDelegate;
}

@property (nonatomic) <ICLinkEditorDelegate> *linkDelegate;
@property (nonatomic) <ICLinkMenuDelegate> *linkMenuDelegate;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void).cxx_destruct;
- (id)linkDelegate;
- (id)linkMenuDelegate;
- (void)setLinkDelegate:(id)arg1;
- (void)setLinkMenuDelegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (Class)attachmentViewClassForTextContainer:(id)arg1;

@end
