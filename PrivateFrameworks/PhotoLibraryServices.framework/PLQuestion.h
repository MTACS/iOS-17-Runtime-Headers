
@interface PLQuestion : PLManagedObject

@property (nonatomic, retain) NSDictionary *additionalInfo;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) unsigned short displayType;
@property (nonatomic, retain) NSString *entityIdentifier;
@property (nonatomic) unsigned short entityType;
@property (nonatomic) short questionVersion;
@property (nonatomic) double score;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short type;
@property (nonatomic, retain) NSString *uuid;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2;

- (void)delete;

@end
