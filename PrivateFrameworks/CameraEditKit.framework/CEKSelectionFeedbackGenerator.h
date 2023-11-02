
@interface CEKSelectionFeedbackGenerator : NSObject {
    unsigned int  __endStopSoundID;
    UISelectionFeedbackGenerator * __feedbackGenerator;
    unsigned int  __majorTickSoundID;
    unsigned int  __minorTickSoundID;
    unsigned int  __overscrollTickSoundID;
}

@property (nonatomic, readonly) unsigned int _endStopSoundID;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, readonly) unsigned int _majorTickSoundID;
@property (nonatomic, readonly) unsigned int _minorTickSoundID;
@property (nonatomic, readonly) unsigned int _overscrollTickSoundID;

- (void).cxx_destruct;
- (unsigned int)_endStopSoundID;
- (id)_feedbackGenerator;
- (unsigned int)_majorTickSoundID;
- (unsigned int)_minorTickSoundID;
- (unsigned int)_overscrollTickSoundID;
- (void)dealloc;
- (id)init;
- (void)performFeedback;
- (void)playEndTickSound;
- (void)playMajorTickSound;
- (void)playMinorTickSound;
- (void)playOverscrollTickSound;
- (void)prepareFeedback;

@end
