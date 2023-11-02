
@interface ICSystemPaperTextAttachment : ICInlineCanvasTextAttachment <PKPaperTextAttachment> {
    UIView * _cachedControlViewForPlaceView;
    UIView * _cachedDrawingViewForPlaceView;
    ICDrawingHashtagsAndMentionsController * _hashtagsAndMentionsController;
    ICSelectorDelayer * _paperChangeSelectorDelayer;
    NSString * _paperIdentifierBeforeAttachmentIsSet;
    NSHashTable * _systemPaperViews;
}

@property (nonatomic, readonly) NSURL *_encryptionDelegateCRContextURL;
@property (nonatomic, readonly) NSURL *_nonEncryptedContentCRContextURL;
@property (nonatomic, readonly) NSURL *_paperBundleURL;
@property (nonatomic, readonly) NSString *_paperIdentifier;
@property (nonatomic) UIView *cachedControlViewForPlaceView;
@property (nonatomic) UIView *cachedDrawingViewForPlaceView;
@property (nonatomic, retain) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController;
@property (nonatomic, retain) ICSelectorDelayer *paperChangeSelectorDelayer;
@property (nonatomic, copy) NSString *paperIdentifierBeforeAttachmentIsSet;
@property (nonatomic, retain) NSHashTable *systemPaperViews;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)_encryptionDelegateCRContextURL;
- (id)_image;
- (void)_linkCanvasElementsDidChange;
- (id)_nonEncryptedContentCRContextURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_paperBoundsHint;
- (id)_paperBundleURL;
- (void)_paperDidChangeLocally;
- (id)_paperIdentifier;
- (struct CGSize { double x1; double x2; })_paperSizeHint;
- (id)attachmentAsNSTextAttachment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentViews;
- (id)cachedControlViewForPlaceView;
- (id)cachedDrawingViewForPlaceView;
- (bool)canDragWithoutSelecting;
- (void)configureHashtagAndMentionsForView:(id)arg1;
- (id)contents;
- (void)dealloc;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (id)fileType;
- (id)hashtagsAndMentionsController;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithPaperIdentifier:(id)arg1;
- (id)inlineViews;
- (id)paperChangeSelectorDelayer;
- (void)paperDidChange;
- (id)paperIdentifierBeforeAttachmentIsSet;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 textContainer:(id)arg2;
- (void)resetZoom;
- (void)setCachedControlViewForPlaceView:(id)arg1;
- (void)setCachedDrawingViewForPlaceView:(id)arg1;
- (void)setHashtagsAndMentionsController:(id)arg1;
- (void)setPaperChangeSelectorDelayer:(id)arg1;
- (void)setPaperIdentifierBeforeAttachmentIsSet:(id)arg1;
- (void)setSystemPaperViews:(id)arg1;
- (id)systemPaperViews;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
