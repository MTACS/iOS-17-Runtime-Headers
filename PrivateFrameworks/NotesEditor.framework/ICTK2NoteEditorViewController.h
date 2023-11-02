
@interface ICTK2NoteEditorViewController : ICNoteEditorViewController <ICAttachmentInsertionDelegate, ICHashtagAnalyticsDelegate, ICLinkAcceleratorControllerDelegate, ICLinkEditorDelegate, ICMentionsAnalyticsDelegate, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate, UITextViewDrawingDelegate> {
    NSDate * _attributionSidebarOpenedDate;
    CALayer * _maskLayer;
    NSLayoutConstraint * _textViewLeadingConstraint;
    ICAttributionSidebarController * _tk2AttributionSidebarController;
    ICTK2TextView * _tk2TextView;
}

@property (nonatomic, readonly) UIView *acceleratorHostingView;
@property (nonatomic, retain) NSDate *attributionSidebarOpenedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool languageHasSpaces;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastSelectedRangeForAccelerator;
@property (nonatomic, retain) CALayer *maskLayer;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) NSString *searchString;
@property (readonly) bool shouldShowFloatingSuggestions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICTTTextStorage *textStorage;
@property (nonatomic, retain) NSLayoutConstraint *textViewLeadingConstraint;
@property (nonatomic, retain) ICAttributionSidebarController *tk2AttributionSidebarController;
@property (nonatomic, retain) ICTK2TextView *tk2TextView;
@property (nonatomic, readonly) long long writingDirection;

- (void).cxx_destruct;
- (void)acceleratorOriginNeedsUpdate;
- (id)attachmentPresenter:(id)arg1 transitionViewForAttachment:(id)arg2;
- (id)attributionSidebarController;
- (id)attributionSidebarOpenedDate;
- (id)attributionSidebarView;
- (void)authorHighlightsControllerDidPerformHighlightUpdates:(id)arg1;
- (bool)languageHasSpaces;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastSelectedRangeForAccelerator;
- (id)maskLayer;
- (id)nibName;
- (void)recreateTextView;
- (void)removeTextView;
- (void)renderAuthorHighlights;
- (void)setAttributionSidebarOpenedDate:(id)arg1;
- (void)setAuthorHighlightsController:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setTextViewLeadingConstraint:(id)arg1;
- (void)setTk2AttributionSidebarController:(id)arg1;
- (void)setTk2TextView:(id)arg1;
- (id)textController;
- (id)textStorage;
- (void)textStorageDidUpdateDataDetectionResults:(id)arg1;
- (id)textView;
- (id)textViewIfLoaded;
- (id)textViewLeadingConstraint;
- (id)tk2AttributionSidebarController;
- (id)tk2TextView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)writingDirection;

@end
