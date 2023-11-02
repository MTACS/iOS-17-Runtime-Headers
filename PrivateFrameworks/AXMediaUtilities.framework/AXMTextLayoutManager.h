
@interface AXMTextLayoutManager : NSObject {
    NSMeasurementFormatter * _measurementFormatter;
    NSNumberFormatter * _numberFormatter;
    AXMSemanticTextFactory * _semanticTextFactory;
}

@property (nonatomic, retain) NSMeasurementFormatter *measurementFormatter;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic, retain) AXMSemanticTextFactory *semanticTextFactory;

- (void).cxx_destruct;
- (id)_assembleLayoutCellsWithFeatures:(id)arg1;
- (id)_assembleLayoutColumn:(id)arg1;
- (id)_assembleLayoutHeader:(id)arg1;
- (id)_assembleLayoutLines:(id)arg1;
- (id)_assembleLayoutRegions:(id)arg1;
- (id)_assembleLayoutRow:(id)arg1;
- (id)_assembleLayoutRowFromCell:(id)arg1;
- (id)_assembleLayoutSequences:(id)arg1;
- (id)_assembleLayoutTable:(id)arg1 header:(id)arg2 columnItems:(id)arg3;
- (id)_assembleNutritionLabelLayoutWithRows:(id)arg1;
- (id)_assembleReceipt:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })detectCenterContourFromContours:(id)arg1 withImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)documentWithNutritionLabel:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 requestHandler:(id)arg3 metrics:(id)arg4 error:(id*)arg5;
- (id)documentWithReceipt:(id)arg1 withTextSkew:(double)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3 preferredLocales:(id)arg4 requestHandler:(id)arg5 metrics:(id)arg6 error:(id*)arg7;
- (id)documentWithTable:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 preferredLocales:(id)arg3 requestHandler:(id)arg4 metrics:(id)arg5 error:(id*)arg6;
- (id)documentWithTextFeatures:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 preferredLocales:(id)arg3 applySemanticAnalysis:(bool)arg4 error:(id*)arg5;
- (id)envelopeWithTextFeatures:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 preferredLocales:(id)arg3 applySemanticAnalysis:(bool)arg4 error:(id*)arg5;
- (id)extractDataFromEnvelopeWithFeatures:(id)arg1 preferredLocales:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
- (id)featureCellsForNutritionLabelRows:(id)arg1 withRequestHandler:(id)arg2 withCanvasSize:(struct CGSize { double x1; double x2; })arg3;
- (id)filterReceiptForGarbageText:(id)arg1;
- (id)fractionDenominatorValues;
- (id)fractionDenominatorValuesWithOneAsNumerator;
- (id)getReceiptRows:(id)arg1 preferredLocales:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
- (id)getTableColumns:(id)arg1;
- (id)getTableRows:(id)arg1;
- (bool)hasConsecutiveCharacters:(id)arg1 withLength:(unsigned long long)arg2;
- (bool)hasConsecutiveDigits:(id)arg1 withLength:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3;
- (id)initWithSemanticTextFactory:(id)arg1;
- (bool)isBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withNormalizedThreshold:(double)arg3;
- (bool)isBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinNormalizedDistance:(double)arg2 ofBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)largestDetectedContoursForImage:(id)arg1;
- (id)measurementAbbreviationsToVerboseString;
- (id)measurementFormatter;
- (id)numberFormatter;
- (id)nutritionLabelRowsForContourResults:(id)arg1 normalizedNutritionLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fullImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 processedImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)preprocessNutritionLabel:(id)arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)preprocessReceipt:(id)arg1 withTextSkew:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 metrics:(id)arg5 requestHandler:(id)arg6 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (id)preprocessTable:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 metrics:(id)arg4;
- (id)processFraction:(id)arg1;
- (id)processMeasurement:(id)arg1;
- (id)processNutritionLabelText:(id)arg1;
- (id)processReceiptText:(id)arg1 foundMerchantName:(bool*)arg2 preferredLocales:(id)arg3;
- (id)receiptRegularExpressions;
- (id)semanticTextFactory;
- (void)setMeasurementFormatter:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setSemanticTextFactory:(id)arg1;
- (id)sortContourColumnResults:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3;
- (id)sortContourRowResults:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 minWidth:(double)arg4 minHeight:(double)arg5;
- (id)textColumnsForTable:(id)arg1 sourceImage:(id)arg2 requestHandler:(id)arg3 canvasSize:(struct CGSize { double x1; double x2; })arg4;
- (id)textRowsForTable:(id)arg1 sourceImage:(id)arg2 requestHandler:(id)arg3 canvasSize:(struct CGSize { double x1; double x2; })arg4;
- (bool)verifyTable:(id)arg1 sortedColumns:(id)arg2;

@end
