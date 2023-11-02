
@interface ICAbstractTextAttachment : NSTextAttachment <ICTTAttachment> {
    ICBaseAttachment * _attachment;
    double  _foregroundAlpha;
    UIColor * _highlightColor;
}

@property (nonatomic, retain) ICBaseAttachment *attachment;
@property (nonatomic, readonly, copy) NSString *attachmentIdentifier;
@property (nonatomic, readonly, copy) NSString *attachmentUTI;
@property (nonatomic, readonly) bool containsFindableText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double foregroundAlpha;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *highlightColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedPresentationSizes;
@property (nonatomic, readonly) bool supportsMultiplePresentationSizes;
@property (nonatomic, readonly) bool supportsMultipleThumbnailsOnSameLine;
@property (getter=isUnsupported, nonatomic, readonly) bool unsupported;
@property (nonatomic, readonly, copy) NSString *viewIdentifier;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)textAttachmentWithBaseAttachment:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsTextAttachmentView;
- (id)attachment;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (Class)attachmentViewClassForTextContainer:(id)arg1;
- (Class)attachmentViewControllerClass;
- (bool)containsFindableText;
- (double)foregroundAlpha;
- (id)highlightColor;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)inlineAttachmentInContext:(id)arg1;
- (bool)isEqualToModelComparable:(id)arg1;
- (bool)isUnsupported;
- (id)newlyCreatedViewForManualRendering:(bool)arg1 textContainer:(id)arg2;
- (id)newlyCreatedViewForManualRenderingInTextContainer:(id)arg1;
- (id)newlyCreatedViewForTextContainer:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (id)supportedPresentationSizes;
- (bool)supportsMultiplePresentationSizes;
- (bool)supportsMultipleThumbnailsOnSameLine;
- (bool)supportsUserConfigurablePresentationSizeForTextContainer:(id)arg1;
- (bool)usesTextAttachmentView;
- (id)viewIdentifier;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)newlyCreatedViewControllerForManualRendering:(bool)arg1 layoutManager:(id)arg2 initialCharacterIndex:(unsigned long long)arg3;
- (id)viewForLayoutManager:(id)arg1;

@end
