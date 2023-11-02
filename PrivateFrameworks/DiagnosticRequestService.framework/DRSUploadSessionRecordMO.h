
@interface DRSUploadSessionRecordMO : NSManagedObject

@property (nonatomic, copy) NSDate *sessionDate;

+ (id)fetchRequest;

@end
