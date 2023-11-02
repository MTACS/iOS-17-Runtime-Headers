
@interface ARQAHelper : NSObject

+ (float)_meanDepthValueOfDepthBuffer:(struct __CVBuffer { }*)arg1 consideringSegmentation:(bool)arg2 ofSegmentationBuffer:(struct __CVBuffer { }*)arg3;
+ (id)arrayFromRaycastResults:(id)arg1;
+ (id)arrayOf2dPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
+ (id)arrayOf3dPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithMatrix3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)arrayWithMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)arrayWithVector2;
+ (id)arrayWithVector3;
+ (id)arrayWithVector4;
+ (id)dictionaryFromAnchor:(id)arg1;
+ (id)dictionaryFromCLLocation:(id)arg1;
+ (id)dictionaryFromMeshAnchor:(id)arg1;
+ (id)dictionaryFromMeshGeometry:(id)arg1;
+ (id)dictionaryFromPatchGrid:(id)arg1;
+ (id)dictionaryFromPlaneAnchor:(id)arg1;
+ (id)dictionaryFromPlaneExtent:(id)arg1;
+ (id)dictionaryFromRawCLLocation:(id)arg1;
+ (id)dictionaryFromRaycastQuery:(id)arg1;
+ (id)dictionaryFromVertices:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 vertexCount:(unsigned long long)arg2 textureCoordinates:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 textureCoordinateCount:(unsigned long long)arg4;
+ (id)extractAnchorDataForFrame:(id)arg1;
+ (id)extractDetectedBodiesForFrame:(id)arg1;
+ (id)formatDescriptionForAnchor;
+ (id)formatDescriptionForPlaneAnchor;
+ (id)generateTagsForConfiguration:(id)arg1 replaySensor:(id)arg2 technique:(id)arg3;
+ (id)headerInformationWithConfiguration:(id)arg1 technique:(id)arg2;
+ (void)techniquesArray:(id)arg1 array:(id)arg2;
+ (id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2;
+ (id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2 writeOBJ:(bool)arg3;
+ (void)traverseTechniques:(id)arg1 withBlock:(id /* block */)arg2;

@end
