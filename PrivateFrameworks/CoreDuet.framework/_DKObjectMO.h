
@interface _DKObjectMO : NSManagedObject

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) _DKEventMO *event;
@property (nonatomic, copy) NSDate *localCreationDate;
@property (nonatomic, retain) _DKSourceMO *source;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSNumber *uuidHash;

+ (id)fetchRequest;

@end
