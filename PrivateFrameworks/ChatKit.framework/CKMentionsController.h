
@interface CKMentionsController : NSObject {
    NSMutableDictionary * _animationsByIdentifier;
    <CKMentionsControllerDelegate> * _delegate;
    NSAttributedString * _mentionAttributes;
    NSTimer * _mentionTimer;
    CKMentionsTextContainerOverlayView * _overlayView;
    CKMessageEntryRichTextView * _textView;
}

@property (nonatomic, retain) NSMutableDictionary *animationsByIdentifier;
@property (getter=isAnyMentionAnimationActive, nonatomic, readonly) bool anyMentionAnimationActive;
@property (nonatomic) <CKMentionsControllerDelegate> *delegate;
@property (nonatomic, copy) NSAttributedString *mentionAttributes;
@property (nonatomic, retain) NSTimer *mentionTimer;
@property (nonatomic, retain) CKMentionsTextContainerOverlayView *overlayView;
@property (nonatomic, retain) CKMessageEntryRichTextView *textView;

- (void).cxx_destruct;
- (void)_delegateDidFinishMentionAnimationWithIdentifier:(id)arg1;
- (void)_startAnimationIfNeeded;
- (id)animationsByIdentifier;
- (id)delegate;
- (void)didSetAttributedTextOfTextView;
- (id)initWithEntryTextView:(id)arg1;
- (bool)isAnyMentionAnimationActive;
- (id)mentionAttributes;
- (id)mentionTimer;
- (id)overlayView;
- (void)setAnimationsByIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMentionAttributes:(id)arg1;
- (void)setMentionTimer:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)stopTimerRemovingAttribute:(bool)arg1;
- (id)textView;
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(bool)arg1;
- (void)updateMentionAttributes:(id)arg1;
- (void)updateMentionDisplay;

@end
