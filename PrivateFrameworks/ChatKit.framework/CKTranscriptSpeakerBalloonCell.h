
@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell {
    bool  _adjustSpeakerForAcknowledgment;
    bool  _shouldShowText;
    CKSpeakerButton * _speakerButton;
    bool  _speakerEnabled;
    bool  _speakerEnabledBeforeManualHide;
    bool  _speakerIsManuallyHidden;
}

@property (nonatomic) bool adjustSpeakerForAcknowledgment;
@property (nonatomic) bool shouldShowText;
@property (nonatomic, retain) CKSpeakerButton *speakerButton;
@property (getter=isSpeakerEnabled, nonatomic) bool speakerEnabled;
@property (nonatomic) bool speakerEnabledBeforeManualHide;
@property (getter=isSpeakerHidden, nonatomic) bool speakerHidden;
@property (nonatomic) bool speakerIsManuallyHidden;

- (void).cxx_destruct;
- (bool)adjustSpeakerForAcknowledgment;
- (bool)allowsSwipeToReply;
- (bool)isSpeakerEnabled;
- (bool)isSpeakerHidden;
- (void)layoutSubviewsForAlignmentContents;
- (void)setAdjustSpeakerForAcknowledgment:(bool)arg1;
- (void)setDrawerPercentRevealed:(double)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setShouldShowText:(bool)arg1;
- (void)setSpeakerButton:(id)arg1;
- (void)setSpeakerEnabled:(bool)arg1;
- (void)setSpeakerEnabledBeforeManualHide:(bool)arg1;
- (void)setSpeakerHidden:(bool)arg1;
- (void)setSpeakerIsManuallyHidden:(bool)arg1;
- (bool)shouldShowText;
- (id)speakerButton;
- (bool)speakerEnabledBeforeManualHide;
- (bool)speakerIsManuallyHidden;

@end
