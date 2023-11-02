
@interface _EMKTextKit2Controller : NSObject <NSTextContentStorageDelegate> {
    _EMKTextContainerOverlayView * _containerOverlayView;
    bool  _darkModeEnabled;
    bool  _emojiAnimationActive;
    bool  _emojiConversionActive;
    bool  _emojiConversionEnabled;
    NSArray * _emojiConversionLanguages;
    EMFEmojiPreferences * _emojiPreferences;
    _EMKTouchInfo * _lastTouchInfo;
    EMKOverlayView * _overlayView;
    NSTimer * _rippleTimer;
    EMKGlyphRippler * _rippler;
    UIView * _textContainerOverlayView;
    EMKTextEnumerator * _textEnumerator;
    EMKTextView * _textView;
}

@property (readonly) NSTextLayoutManager *_layoutManager;
@property (nonatomic, retain) _EMKTextContainerOverlayView *containerOverlayView;
@property (getter=isDarkModeEnabled, nonatomic) bool darkModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmojiAnimationActive, nonatomic) bool emojiAnimationActive;
@property (getter=isEmojiConversionActive, nonatomic) bool emojiConversionActive;
@property (getter=isEmojiConversionEnabled, nonatomic) bool emojiConversionEnabled;
@property (nonatomic, copy) NSArray *emojiConversionLanguages;
@property (retain) EMFEmojiPreferences *emojiPreferences;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _EMKTouchInfo *lastTouchInfo;
@property (retain) EMKOverlayView *overlayView;
@property (retain) NSTimer *rippleTimer;
@property (nonatomic, retain) EMKGlyphRippler *rippler;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textContainerOverlayView;
@property (nonatomic, retain) EMKTextEnumerator *textEnumerator;
@property EMKTextView *textView;

+ (id)log;

- (void).cxx_destruct;
- (void)__startAnimation;
- (void)__stopAnimation;
- (id)_layoutManager;
- (void)_startOrStopAnimation;
- (void)_startRippleAnimation;
- (void)_updateOverlayView;
- (id)containerOverlayView;
- (void)dismissOverlayView;
- (id)emojiConversionLanguages;
- (id)emojiPreferences;
- (id)initWithTextView:(id)arg1 emojiPreferences:(id)arg2;
- (bool)isDarkModeEnabled;
- (bool)isEmojiAnimationActive;
- (bool)isEmojiConversionActive;
- (bool)isEmojiConversionEnabled;
- (id)lastTouchInfo;
- (id)overlayView;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withEmojiToken:(id)arg2 language:(id)arg3;
- (id)rippleTimer;
- (id)rippler;
- (void)setContainerOverlayView:(id)arg1;
- (void)setDarkModeEnabled:(bool)arg1;
- (void)setEmojiAnimationActive:(bool)arg1;
- (void)setEmojiConversionActive:(bool)arg1;
- (void)setEmojiConversionEnabled:(bool)arg1;
- (void)setEmojiConversionLanguages:(id)arg1;
- (void)setEmojiPreferences:(id)arg1;
- (void)setLastTouchInfo:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setRippleTimer:(id)arg1;
- (void)setRippler:(id)arg1;
- (void)setTextContainerOverlayView:(id)arg1;
- (void)setTextEnumerator:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textContainerOverlayView;
- (bool)textContentManager:(id)arg1 shouldEnumerateTextElement:(id)arg2 options:(unsigned long long)arg3;
- (id)textContentStorage:(id)arg1 textParagraphWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)textEnumerator;
- (void)textTapGestureRecognized:(id)arg1;
- (id)textView;
- (void)textViewDidLayoutSubviews;
- (bool)touchHasEmojiSignificance:(id)arg1;
- (void)updateEmojiDisplay:(id)arg1;

@end
