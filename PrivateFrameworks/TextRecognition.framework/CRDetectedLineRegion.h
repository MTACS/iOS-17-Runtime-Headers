
@interface CRDetectedLineRegion : NSObject <CRDirectionalRegion, CRIdentifiable, NSCopying, NSMutableCopying> {
    CRNormalizedQuad * _boundingQuad;
    bool  _isCurved;
    unsigned long long  _layoutDirection;
    unsigned long long  _nmsOutputScale;
    CRNormalizedPolyline * _polygon;
    NSDictionary * _scriptCategoryCounts;
    NSArray * _scriptCategoryResults;
    NSString * _sequenceScriptOutputResult;
    bool  _shouldRunSequenceOrientation;
    bool  _shouldRunSequenceScript;
    unsigned long long  _textType;
    NSObject<CRScriptCategory> * _topScriptCategory;
    NSUUID * _uuid;
}

@property (readonly) double aspectRatio;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isCurved;
@property unsigned long long layoutDirection;
@property unsigned long long nmsOutputScale;
@property (retain) CRNormalizedPolyline *polygon;
@property (readonly) struct CGSize { double x1; double x2; } rectifiedSize;
@property (retain) NSDictionary *scriptCategoryCounts;
@property (retain) NSArray *scriptCategoryResults;
@property (retain) NSString *sequenceScriptOutputResult;
@property bool shouldRunSequenceOrientation;
@property bool shouldRunSequenceScript;
@property (readonly) Class superclass;
@property unsigned long long textType;
@property (retain) NSObject<CRScriptCategory> *topScriptCategory;
@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_copyContentsToObject:(id)arg1;
- (void)_rotate180;
- (double)aspectRatio;
- (id)boundingQuad;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isCurved;
- (unsigned long long)layoutDirection;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)nmsOutputScale;
- (id)polygon;
- (struct CGSize { double x1; double x2; })rectifiedSize;
- (id)rotated180;
- (id)scriptCategoryCounts;
- (id)scriptCategoryResults;
- (id)sequenceScriptOutputResult;
- (void)setBoundingQuad:(id)arg1;
- (void)setIsCurved:(bool)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (void)setNmsOutputScale:(unsigned long long)arg1;
- (void)setPolygon:(id)arg1;
- (void)setScriptCategoryCounts:(id)arg1;
- (void)setScriptCategoryResults:(id)arg1;
- (void)setSequenceScriptOutputResult:(id)arg1;
- (void)setShouldRunSequenceOrientation:(bool)arg1;
- (void)setShouldRunSequenceScript:(bool)arg1;
- (void)setTextType:(unsigned long long)arg1;
- (void)setTopScriptCategory:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldRunSequenceOrientation;
- (bool)shouldRunSequenceScript;
- (unsigned long long)textType;
- (id)topScriptCategory;
- (id)uuid;

@end
