
@interface CRParagraphOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing> {
    CRNormalizedQuad * _topBottomEdgesQuad;
    bool  _useLineSeparatorAsJoiningDelimiter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) CRNormalizedQuad *topBottomEdgesQuad;
@property bool useLineSeparatorAsJoiningDelimiter;

+ (id)paragraphWithLines:(id)arg1 confidence:(int)arg2 baselineAngle:(double)arg3;
+ (id)paragraphsWithLines:(id)arg1;

- (void).cxx_destruct;
- (void)_computeGeometryInfo;
- (bool)computesNumberOfLinesFromChildren;
- (bool)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)joiningDelimiter;
- (id)layoutComponents;
- (id)regionsSuitableForDataDetectorOutput;
- (void)setTopBottomEdgesQuad:(id)arg1;
- (void)setUseLineSeparatorAsJoiningDelimiter:(bool)arg1;
- (unsigned long long)textAlignment;
- (id)topBottomEdgesQuad;
- (unsigned long long)type;
- (bool)useLineSeparatorAsJoiningDelimiter;

@end
