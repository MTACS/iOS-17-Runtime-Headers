
@interface PHDetectionTrait : NSObject {
    double  _duration;
    double  _score;
    double  _startTime;
    short  _type;
    short  _value;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) short value;

+ (id)detectionTraitsByFaceLocalIdentifierForFaceUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)detectionTraitsByFaceLocalIdentifierForFaceUUIDs:(id)arg1 photoLibrary:(id)arg2 withDetectionTraitTypes:(id)arg3;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:(id)arg1;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:(id)arg1 withDetectionTraitTypes:(id)arg2;
+ (id)detectionTraitsForDetection:(id)arg1;

- (double)duration;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithType:(short)arg1 value:(short)arg2 score:(double)arg3 startTime:(double)arg4 duration:(double)arg5;
- (id)propertyListRepresentation;
- (double)score;
- (double)startTime;
- (short)type;
- (short)value;

@end
