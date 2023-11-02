
@interface IRCandidateMO : NSManagedObject

@property (nonatomic, retain) NSString *candidateIdentifier;
@property (nonatomic, retain) IRCandidatesContainerMO *candidatesContainer;
@property (nonatomic, retain) NSDate *lastSeenDate;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic, retain) NSSet *nodes;

+ (id)MOCandidate:(id)arg1 candidatesContainerMO:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequest;
+ (void)setPropertiesOfCandidateMO:(id)arg1 withCandidate:(id)arg2 managedObjectContext:(id)arg3;

- (id)convert;

@end
