
@interface CRCharacterOutputRegion : CROutputRegion {
    CRNormalizedPolyline * _baseline;
}

+ (id)characterWithText:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)characterWithTextFeature:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 confidenceThresholdProvider:(id)arg3;

- (void).cxx_destruct;
- (bool)computesBoundsFromChildren;
- (bool)computesNumberOfLinesFromChildren;
- (bool)computesTranscriptFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)init;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (id)joiningDelimiter;
- (unsigned long long)type;

@end
