
@interface NSCKImportPendingRelationship : NSManagedObject

@property (nonatomic, retain) NSString *cdEntityName;
@property (nonatomic, retain) NSNumber *needsDelete;
@property (nonatomic, retain) NSCKImportOperation *operation;
@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) NSString *recordZoneName;
@property (nonatomic, retain) NSString *recordZoneOwnerName;
@property (nonatomic, retain) NSString *relatedEntityName;
@property (nonatomic, retain) NSString *relatedRecordName;
@property (nonatomic, retain) NSString *relatedRecordZoneName;
@property (nonatomic, retain) NSString *relatedRecordZoneOwnerName;
@property (nonatomic, retain) NSString *relationshipName;

@end
