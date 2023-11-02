
@interface CKMessageStatusChatItem : CKChatItem {
    struct CGSize { 
        double width; 
        double height; 
    }  _buttonSize;
    bool  _buttonSizeLoaded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _buttonTextAlignmentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelSize;
    bool  _labelSizeLoaded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _labelTextAlignmentInsets;
    NSAttributedString * _transcriptButtonText;
}

@property (nonatomic, readonly) bool allowsEffectAutoPlayback;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } buttonSize;
@property (getter=isButtonSizeLoaded, nonatomic) bool buttonSizeLoaded;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } buttonTextAlignmentInsets;
@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } labelSize;
@property (getter=isLabelSizeLoaded, nonatomic) bool labelSizeLoaded;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } labelTextAlignmentInsets;
@property (nonatomic, readonly) bool shouldHideDuringDarkFSM;
@property (nonatomic, readonly) BOOL statusAlignment;
@property (nonatomic, copy) NSAttributedString *transcriptButtonText;

+ (void)setSizingButton:(id)arg1;
+ (id)sizingButton;
+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;

- (void).cxx_destruct;
- (id)_styledStatusTextWithStatusText:(id)arg1 orientation:(BOOL)arg2 dateSubText:(id)arg3 buttonSubText:(id)arg4 errorSubText:(id)arg5 overrideTextColor:(id)arg6 shouldReplaceWarningIcon:(bool)arg7;
- (bool)allowsEffectAutoPlayback;
- (struct CGSize { double x1; double x2; })buttonSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonTextAlignmentInsets;
- (long long)buttonType;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (unsigned long long)count;
- (id)createReplayText;
- (id)effectsControlStatusTextForEffectStyleID:(id)arg1;
- (long long)expireStatusType;
- (bool)isButtonSizeLoaded;
- (bool)isFromMe;
- (bool)isLabelSizeLoaded;
- (struct CGSize { double x1; double x2; })labelSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })labelTextAlignmentInsets;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadButtonSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (struct CGSize { double x1; double x2; })loadLabelSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptButtonText;
- (id)loadTranscriptText;
- (id)now;
- (void)setButtonSizeLoaded:(bool)arg1;
- (void)setLabelSizeLoaded:(bool)arg1;
- (void)setTranscriptButtonText:(id)arg1;
- (bool)shouldHideDuringDarkFSM;
- (struct CGSize { double x1; double x2; })size;
- (BOOL)statusAlignment;
- (long long)statusType;
- (id)time;
- (id)transcriptButtonText;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (bool)wantsDrawerLayout;

@end
