
@interface CRWordOutputRegion : CROutputRegion {
    CRNormalizedPolyline * _baseline;
}

+ (id)wordWithCharacters:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)wordWithText:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;

- (void).cxx_destruct;
- (bool)computesNumberOfLinesFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (id)joiningDelimiter;
- (unsigned long long)type;

@end
