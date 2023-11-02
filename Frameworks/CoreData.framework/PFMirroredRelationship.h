
@interface PFMirroredRelationship : NSObject

+ (bool)isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;

- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
