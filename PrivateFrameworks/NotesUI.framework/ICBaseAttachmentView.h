
@interface ICBaseAttachmentView : UIView <ICSupplementalView> {
    ICAttachment * _attachment;
    struct CGSize { 
        double width; 
        double height; 
    }  _attachmentContentSize;
    double  _foregroundAlpha;
    UIColor * _highlightColor;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    bool  _selected;
    ICTextAttachment * _textAttachment;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic) struct CGSize { double x1; double x2; } attachmentContentSize;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic, readonly) UIImage *imageForPrinting;
@property (nonatomic) bool selected;
@property (nonatomic) ICTextAttachment *textAttachment;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void).cxx_destruct;
- (void)addKVObserversForAttachment:(id)arg1;
- (id)attachment;
- (struct CGSize { double x1; double x2; })attachmentContentSize;
- (void)attachmentDidChangeSize:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (bool)cancelDidScrollIntoVisibleRange;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (void)didChangeMedia;
- (void)didChangeMergeableData;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (double)foregroundAlpha;
- (id)highlightColor;
- (id)highlightPatternRegexFinder;
- (id)imageForPrinting;
- (void)mediaDidLoad:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)quickLookTransitionView;
- (void)removeKVOObserversForAttachment:(id)arg1;
- (bool)selected;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTextAttachment:(id)arg1;
- (id)textAttachment;
- (void)updateHighlights;
- (void)willChangeAttachment;
- (void)willDeleteAttachment;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)viewIdentifier;

@end
