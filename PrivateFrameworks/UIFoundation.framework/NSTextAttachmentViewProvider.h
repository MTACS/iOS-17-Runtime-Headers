
@interface NSTextAttachmentViewProvider : NSObject {
    unsigned long long  _characterIndex;
    NSLayoutManager * _layoutManager;
    <NSTextLocation> * _location;
    NSTextAttachment * _textAttachment;
    NSTextLayoutManager * _textLayoutManager;
    bool  _tracksTextAttachmentViewBounds;
    UIView * _view;
}

@property (readonly) unsigned long long characterIndex;
@property NSLayoutManager *layoutManager;
@property (retain) <NSTextLocation> *location;
@property NSTextAttachment *textAttachment;
@property NSTextLayoutManager *textLayoutManager;
@property bool tracksTextAttachmentViewBounds;
@property (retain) UIView *view;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (unsigned long long)characterIndex;
- (void)dealloc;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;
- (id)layoutManager;
- (void)loadView;
- (id)location;
- (id)previewImageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (void)removeView;
- (void)setLayoutManager:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setTextAttachment:(id)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (void)setTracksTextAttachmentViewBounds:(bool)arg1;
- (void)setView:(id)arg1;
- (id)textAttachment;
- (id)textLayoutManager;
- (bool)tracksTextAttachmentViewBounds;
- (id)view;

@end
