
@interface SXDOMAnalyzerModifier : NSObject <SXDOMModifying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)analyzeButtonComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeComponents:(id)arg1 parent:(id)arg2 DOM:(id)arg3;
- (void)analyzeDataTableCellStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeDataTableComponent:(id)arg1 DOM:(id)arg2;
- (void)analyzeDataTableStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeFormattedText:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeGalleryComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeInlineTextStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3;
- (void)analyzeScalableImageComponent:(id)arg1 analysis:(id)arg2;
- (void)analyzeTextComponent:(id)arg1 analysis:(id)arg2;
- (void)modifyDOM:(id)arg1 context:(id)arg2;

@end
