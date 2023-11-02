
@interface VOBundle : NSManagedObject

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) VOSubstitution *iOSSubstitution;
@property (nonatomic, retain) VOSubstitution *macOSSubstitution;

+ (id)fetchRequest;

@end
