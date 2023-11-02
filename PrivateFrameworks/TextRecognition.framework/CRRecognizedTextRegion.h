
@interface CRRecognizedTextRegion : NSObject <CRGrouping, CRTextRegion, NSCopying, NSMutableCopying> {
    double  _activationProbability;
    CRNormalizedQuad * _boundingQuad;
    NSArray * _candidates;
    double  _confidence;
    CRDetectedLineRegion * _detectedLineRegion;
    bool  _isCurved;
    unsigned long long  _layoutDirection;
    NSString * _locale;
    CRNormalizedPolyline * _polygon;
    NSArray * _subregions;
    NSString * _text;
    unsigned long long  _textRegionType;
    bool  _whitespaceInjected;
}

@property double activationProbability;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) NSArray *candidates;
@property double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CRDetectedLineRegion *detectedLineRegion;
@property (readonly) unsigned long long hash;
@property bool isCurved;
@property unsigned long long layoutDirection;
@property (retain) NSString *locale;
@property (retain) CRNormalizedPolyline *polygon;
@property (retain) NSArray *subregions;
@property (readonly) Class superclass;
@property (retain) NSString *text;
@property unsigned long long textRegionType;
@property bool whitespaceInjected;

- (void).cxx_destruct;
- (void)_copyContentsToObject:(id)arg1;
- (double)activationProbability;
- (id)boundingQuad;
- (id)candidates;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createCharacterSubFeaturesTopWhiteSpacePoints:(id)arg1 bottomWhiteSpacePoints:(id)arg2 falsePositiveFiltering:(bool)arg3;
- (id)createSubregionsForString:(id)arg1 topWhiteSpacePoints:(id)arg2 bottomWhiteSpacePoints:(id)arg3 hasBoundarySpacePoints:(bool)arg4 hasCharacterAndWordBoundaries:(bool)arg5;
- (id)description;
- (id)detectedLineRegion;
- (id)initWithType:(unsigned long long)arg1 detectedLineRegion:(id)arg2;
- (bool)isCurved;
- (unsigned long long)layoutDirection;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)polygon;
- (void)setActivationProbability:(double)arg1;
- (void)setBoundingQuad:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setDetectedLineRegion:(id)arg1;
- (void)setIsCurved:(bool)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setPolygon:(id)arg1;
- (void)setSubregions:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextRegionType:(unsigned long long)arg1;
- (void)setWhitespaceInjected:(bool)arg1;
- (id)subregions;
- (id)text;
- (unsigned long long)textRegionType;
- (bool)whitespaceInjected;

@end
