
@interface CHManagedHandle : NSManagedObject

@property (nonatomic, readonly) CHHandle *chHandle;
@property (nonatomic, retain) NSSet *localParticipantCalls;
@property (nonatomic, copy) NSString *normalizedValue;
@property (nonatomic, retain) NSSet *remoteParticipantCalls;
@property (nonatomic) short type;
@property (nonatomic, retain) NSString *value;

+ (id)fetchRequest;
+ (id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)chHandle;
- (id)copyWithContext:(id)arg1;

@end
