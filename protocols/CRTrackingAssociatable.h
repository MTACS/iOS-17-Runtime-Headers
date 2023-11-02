
@protocol CRTrackingAssociatable <NSObject>

@required

- (CRNormalizedQuad *)boundingQuad;
- (CRImageSpaceQuad *)boundingQuadAfterOCR;
- (CRNormalizedQuad *)boundingQuadAtOCRDispatch;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })boundingQuadHomography;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })boundingQuadHomographySinceOCRDispatch;
- (CRNormalizedQuad *)originalBoundingQuad;
- (void)setBoundingQuad:(CRNormalizedQuad *)arg1;
- (void)setBoundingQuadAfterOCR:(CRImageSpaceQuad *)arg1;
- (void)setBoundingQuadAtOCRDispatch:(CRNormalizedQuad *)arg1;
- (void)setBoundingQuadHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setOriginalBoundingQuad:(CRNormalizedQuad *)arg1;
- (void)setTrackNeedsReplacement:(bool)arg1;
- (void)setTrackingID:(NSUUID *)arg1;
- (bool)trackNeedsReplacement;
- (NSUUID *)trackingID;

@end
