
@interface SiriSharedUICompactUserUtteranceView : SiriSharedUIStandardView <SUICStreamingTextViewDelegate> {
    UIVisualEffectView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <SiriSharedUICompactUserUtteranceViewDelegate> * _delegate;
    SUICStreamingTextView * _editableStreamingTextView;
    SUICStreamingTextView * _emojiMaskStreamingTextView;
    bool  _isEditing;
    bool  _isInAmbient;
    bool  _isInAmbientInteractivity;
    SRUIFSpeechRecognitionHypothesis * _speechRecognitionHypothesis;
    SUICStreamingTextView * _streamingTextView;
    <SiriSharedUIUserUtteranceEditingDataManaging> * _userUtteranceEditingDataManager;
}

@property (getter=_backgroundView, setter=_setBackgroundView:, nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriSharedUICompactUserUtteranceViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_editableStreamingTextView, setter=_setEditableStreamingTextView:, nonatomic, retain) SUICStreamingTextView *editableStreamingTextView;
@property (getter=_emojiMaskStreamingTextView, setter=_setEmojiMaskStreamingTextView:, nonatomic, retain) SUICStreamingTextView *emojiMaskStreamingTextView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEditing;
@property (nonatomic) bool isInAmbient;
@property (nonatomic) bool isInAmbientInteractivity;
@property (getter=_streamingTextView, setter=_setStreamingTextView:, nonatomic, retain) SUICStreamingTextView *streamingTextView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_createStreamingTextViewForEmojisOnly:(bool)arg1;
- (id)_editableStreamingTextView;
- (id)_emojiMaskStreamingTextView;
- (id)_fontForStreamingTextView;
- (void)_handleTap:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setEditableStreamingTextView:(id)arg1;
- (void)_setEmojiMaskStreamingTextView:(id)arg1;
- (void)_setStreamingText:(id)arg1;
- (void)_setStreamingTextView:(id)arg1;
- (id)_streamingTextView;
- (void)_updateAmbientAppearance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)delegate;
- (id)initWithContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 cornerRadius:(double)arg2;
- (bool)isEditing;
- (bool)isInAmbient;
- (bool)isInAmbientInteractivity;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInAmbientInteractivity:(bool)arg1;
- (void)setSpeechRecognitionHypothesis:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
