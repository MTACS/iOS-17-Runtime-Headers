
@interface FPPreflightUserInteractionAlert : NSObject {
    FPStringFormat * _cancelCaptionFormat;
    FPStringFormat * _continueCaptionFormat;
    bool  _continueIsDestructive;
    bool  _enableContinue;
    FPStringFormat * _subtitleFormat;
    FPStringFormat * _titleFormat;
}

@property (nonatomic, retain) FPStringFormat *cancelCaptionFormat;
@property (nonatomic, retain) FPStringFormat *continueCaptionFormat;
@property (nonatomic) bool continueIsDestructive;
@property (nonatomic) bool enableContinue;
@property (nonatomic, retain) FPStringFormat *subtitleFormat;
@property (nonatomic, retain) FPStringFormat *titleFormat;

+ (id)alertFromDictionary:(id)arg1 localizationLookup:(id)arg2;

- (void).cxx_destruct;
- (id)cancelCaptionFormat;
- (id)continueCaptionFormat;
- (bool)continueIsDestructive;
- (bool)enableContinue;
- (void)setCancelCaptionFormat:(id)arg1;
- (void)setContinueCaptionFormat:(id)arg1;
- (void)setContinueIsDestructive:(bool)arg1;
- (void)setEnableContinue:(bool)arg1;
- (void)setSubtitleFormat:(id)arg1;
- (void)setTitleFormat:(id)arg1;
- (id)subtitleFormat;
- (id)titleFormat;

@end
