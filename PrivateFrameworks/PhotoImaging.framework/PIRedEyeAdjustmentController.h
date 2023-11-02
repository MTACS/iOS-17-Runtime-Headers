
@interface PIRedEyeAdjustmentController : PIAdjustmentController

@property (nonatomic, copy) NSArray *inputCorrectionInfo;

+ (id)inputCorrectionInfoKey;

- (bool)hasCorrections;
- (id)inputCorrectionInfo;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setInputCorrectionInfo:(id)arg1;

@end
