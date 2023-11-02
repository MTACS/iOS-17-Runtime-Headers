
@interface HMDManagedObject : NSManagedObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *redactedDescription;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)debugDescription;
- (id)description;
- (id)redactedDescription;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForInsertOrUpdate:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
