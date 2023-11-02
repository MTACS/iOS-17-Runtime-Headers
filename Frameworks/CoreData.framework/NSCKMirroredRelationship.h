
@interface NSCKMirroredRelationship : NSManagedObject

@property (nonatomic, retain) NSString *cdEntityName;
@property (nonatomic, retain) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSNumber *isPending;
@property (nonatomic, retain) NSNumber *isUploaded;
@property (nonatomic, retain) NSNumber *needsDelete;
@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) NSCKRecordZoneMetadata *recordZone;
@property (nonatomic, retain) NSString *relatedEntityName;
@property (nonatomic, retain) NSString *relatedRecordName;
@property (nonatomic, retain) NSString *relationshipName;

+ (id)entityPath;

@end
