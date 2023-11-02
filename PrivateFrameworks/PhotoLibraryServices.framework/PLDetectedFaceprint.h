
@interface PLDetectedFaceprint : PLManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) PLDetectedFace *face;
@property (nonatomic) int faceprintVersion;

+ (id)entityName;

@end
