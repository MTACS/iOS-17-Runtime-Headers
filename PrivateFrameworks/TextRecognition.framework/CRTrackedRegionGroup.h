
@interface CRTrackedRegionGroup : NSObject <CRTrackingAssociatable> {
    NSNumber * _averageLineHeight;
    CRImageSpaceQuad * _boundingQuadAfterOCR;
    CRNormalizedQuad * _boundingQuadAtOCRDispatch;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _boundingQuadHomography;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _boundingQuadHomographySinceOCRDispatch;
    NSMutableArray * _children;
    unsigned long long  _groupChildrenAlignment;
    NSNumber * _homographyGroupID;
    double  _initialOrthogonalityScore;
    bool  _isInlineGroup;
    bool  _isTextLeftJustified;
    bool  _isTextRightJustified;
    double  _lastOriginalBoundingQuadUpdateTime;
    unsigned long long  _layoutDirection;
    unsigned long long  _numberOfLines;
    CRNormalizedQuad * _originalBoundingQuad;
    NSMutableArray * _regionTrackingIDs;
    unsigned long long  _textAlignment;
    bool  _trackNeedsReplacement;
    NSUUID * _trackingID;
    NSUUID * _uuid;
    CRVCQuad * _vcQuad;
    CRNormalizedQuad * boundingQuad;
}

@property (readonly) NSNumber *averageLineHeight;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) CRImageSpaceQuad *boundingQuadAfterOCR;
@property (retain) CRNormalizedQuad *boundingQuadAtOCRDispatch;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } boundingQuadHomography;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } boundingQuadHomographySinceOCRDispatch;
@property (readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSNumber *homographyGroupID;
@property double initialOrthogonalityScore;
@property (readonly) bool isInlineGroup;
@property (readonly) double lastOriginalBoundingQuadUpdateTime;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long numberOfLines;
@property (retain) CRNormalizedQuad *originalBoundingQuad;
@property (readonly) NSArray *regionTrackingIDs;
@property (readonly) Class superclass;
@property unsigned long long textAlignment;
@property bool trackNeedsReplacement;
@property (retain) NSUUID *trackingID;
@property (readonly) CRVCQuad *vcQuad;

+ (id)groupsFromOutputRegions:(id)arg1;

- (void).cxx_destruct;
- (bool)addGroupRegionIfValid:(id)arg1 context:(id)arg2;
- (bool)addInlineGroupIfValid:(id)arg1;
- (void)applyHomographyTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 downscaleRate:(float)arg2 shouldApply:(id /* block */)arg3;
- (id)averageLineHeight;
- (id)boundingQuad;
- (id)boundingQuadAfterOCR;
- (id)boundingQuadAtOCRDispatch;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })boundingQuadHomography;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })boundingQuadHomographySinceOCRDispatch;
- (id)children;
- (id)estimatedPerspectiveQuad;
- (id)homographyGroupID;
- (id)initWithRegion:(id)arg1;
- (double)initialOrthogonalityScore;
- (bool)isInlineGroup;
- (double)lastOriginalBoundingQuadUpdateTime;
- (unsigned long long)layoutDirection;
- (unsigned long long)numberOfLines;
- (id)originalBoundingQuad;
- (id)regionTrackingIDs;
- (void)setBoundingQuad:(id)arg1;
- (void)setBoundingQuadAfterOCR:(id)arg1;
- (void)setBoundingQuadAtOCRDispatch:(id)arg1;
- (void)setBoundingQuadHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setHomographyGroupID:(id)arg1;
- (void)setInitialOrthogonalityScore:(double)arg1;
- (void)setOriginalBoundingQuad:(id)arg1;
- (void)setTextAlignment:(unsigned long long)arg1;
- (void)setTrackNeedsReplacement:(bool)arg1;
- (void)setTrackingID:(id)arg1;
- (unsigned long long)textAlignment;
- (bool)trackNeedsReplacement;
- (id)trackingID;
- (void)updateBoundingQuadAfterOCR;
- (void)updatePreviousAssociationQuad;
- (id)vcQuad;

@end
