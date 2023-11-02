
@interface SCROBrailleTranslationManager : NSObject {
    bool  _alwaysUsesNemethCodeForTechnicalText;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _queue_defaultLanguage;
    bool  _tableSupportsContractedBraille;
    bool  _tableSupportsEightDotBraille;
    BRLTTranslationService * _translationService;
}

@property (nonatomic) bool alwaysUsesNemethCodeForTechnicalText;
@property (nonatomic, copy) NSString *defaultLanguage;
@property (nonatomic, readonly) bool primaryTableSupportsContractedBraille;
@property (nonatomic, readonly) bool primaryTableSupportsEightDotBraille;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BRLTTranslationService *translationService;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (id)defaultLanguage;
- (id)init;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1 forUnitTesting:(bool)arg2;
- (bool)primaryTableSupportsContractedBraille;
- (bool)primaryTableSupportsEightDotBraille;
- (bool)primaryTableSupportsRoundTripping;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 locations:(id*)arg5 textFormattingRanges:(id)arg6;
- (id)queue;
- (id)serviceIdentifier;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setDefaultLanguage:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTranslationService:(id)arg1;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id*)arg4;
- (id)translationService;

@end
