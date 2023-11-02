
@interface RemovedUser : NSManagedObject

@property (nonatomic, copy) NSDate *dateRemoved;
@property (nonatomic, copy) NSString *presenceIdentifier;
@property (nonatomic, copy) NSString *removedHandle;
@property (nonatomic, copy) NSString *statusTypeIdentifier;

+ (id)dateRemovedKeyPath;
+ (id)fetchRequest;
+ (id)handleKeyPath;
+ (id)predicateForHandle:(id)arg1;
+ (id)predicateForHandleString:(id)arg1;
+ (id)predicateForPresenceIdentifier:(id)arg1;
+ (id)predicateForStatusTypeIdentifier:(id)arg1;
+ (id)presenceIdentifierKeyPath;
+ (id)statusTypeIdentifierKeyPath;

@end
