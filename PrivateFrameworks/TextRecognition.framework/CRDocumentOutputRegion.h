
@interface CRDocumentOutputRegion : CROutputRegion <CROutputRegionLayoutContributing, NSSecureCoding> {
    CRDocumentOutputRegionMetadata * _additionalMetadata;
    NSArray * _cachedLayoutComponents;
    CRTextDetectorResults * _detectorResults;
    unsigned long long  _documentRevision;
    CROutputRegion * _title;
}

@property (retain) CRDocumentOutputRegionMetadata *additionalMetadata;
@property (retain) NSArray *cachedLayoutComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CRTextDetectorResults *detectorResults;
@property unsigned long long documentRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) CROutputRegion *title;

+ (id)documentWithLines:(id)arg1 title:(id)arg2 confidence:(int)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)documentWithRegions:(id)arg1 title:(id)arg2 confidence:(int)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)groupedParagraphBlocksFromParagraphs:(id)arg1;

- (void).cxx_destruct;
- (id)additionalMetadata;
- (id)cachedLayoutComponents;
- (void)collectMetadataForNumFilteredRegions:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)detectedFieldRegionsExcludingFields:(id)arg1 updateExcludedFields:(bool)arg2;
- (id)detectorResults;
- (unsigned long long)documentRevision;
- (id)fieldRegionsExcludingAnnotatedFields:(id)arg1 updateContentTypeOfAnnotatedFields:(bool)arg2;
- (int)formness;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (id)layoutComponents;
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)outputRegionWithContentsOfQuad:(id)arg1;
- (id)proposedFieldForPoint:(struct CGPoint { double x1; double x2; })arg1 annotatedFields:(id)arg2;
- (id)proposedFieldForPoint:(struct CGPoint { double x1; double x2; })arg1 existingFields:(id)arg2;
- (void)setAdditionalMetadata:(id)arg1;
- (void)setCachedLayoutComponents:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setDetectorResults:(id)arg1;
- (void)setDocumentRevision:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldReprocessDocument;
- (id)title;
- (id)trackingDocumentWithTrackedType:(unsigned long long)arg1 includeLines:(bool)arg2;
- (unsigned long long)type;
- (id)writeToFileInFolder:(id)arg1 basename:(id)arg2;

@end
