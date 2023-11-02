
@interface PNVisionHelper : NSObject

+ (id)faceprintFromFaceprintArchive:(id)arg1 error:(id*)arg2;

- (float)distanceBetweenFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3;
- (id)faceObservationFromFace:(id)arg1;
- (id)representativenessFromFaceObservations:(id)arg1 error:(id*)arg2;

@end
