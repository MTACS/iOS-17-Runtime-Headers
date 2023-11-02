
@interface CRLineOutputRegion : CRCompositeOutputRegion <CRLayoutLine> {
    CRDetectedLineRegion * _detectedLineRegion;
    unsigned long long  _lineWrappingType;
    bool  _useLineSeparatorAsLineBreak;
}

@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) double confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRDetectedLineRegion *detectedLineRegion;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long layoutDirection;
@property unsigned long long lineWrappingType;
@property (readonly) NSString *locale;
@property (readonly) struct CGSize { double x1; double x2; } rectifiedSize;
@property (readonly) bool shouldWrapToNextLine;
@property (readonly) Class superclass;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property bool useLineSeparatorAsLineBreak;
@property (readonly) NSUUID *uuid;

+ (id)lineWithCharacters:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)lineWithDetectedRegion:(id)arg1;
+ (id)lineWithText:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)lineWithTextFeature:(id)arg1 subfeatureType:(unsigned long long)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 confidenceThresholdProvider:(id)arg4;
+ (id)lineWithTextFeature:(id)arg1 subfeatureType:(unsigned long long)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 confidenceThresholdProvider:(id)arg4 injectSpaceCharacter:(bool)arg5;
+ (id)lineWithTextRegion:(id)arg1 confidenceThresholdProvider:(id)arg2 injectSpaceCharacter:(bool)arg3;
+ (id)lineWithWords:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;

- (void).cxx_destruct;
- (void)appendLine:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxEstimateAfterTrimmingCharacters:(id)arg1;
- (bool)computesNumberOfLinesFromChildren;
- (double)confidenceScore;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)detectedLineRegion;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)initWithConfidence:(int)arg1 baselineAngle:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)joiningDelimiter;
- (unsigned long long)lineWrappingType;
- (id)locale;
- (unsigned long long)nmsOutputScale;
- (id)scriptCategoryResults;
- (id)sequenceScriptOutputResult;
- (void)setDetectedLineRegion:(id)arg1;
- (void)setLineWrappingType:(unsigned long long)arg1;
- (void)setUseLineSeparatorAsLineBreak:(bool)arg1;
- (bool)shouldWrapToNextLine;
- (unsigned long long)textRegionType;
- (unsigned long long)textType;
- (unsigned long long)type;
- (bool)useLineSeparatorAsLineBreak;
- (long long)wordCount;

@end
