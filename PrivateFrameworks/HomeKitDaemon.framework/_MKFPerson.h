
@interface _MKFPerson : _MKFModel <MKFPerson, MKFPersonPrivateExtensions>

@property (nonatomic, readonly, copy) MKFPersonDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfPerson;
- (id)createHMPerson;
- (id)databaseID;
- (void)updateWithHMPerson:(id)arg1;

@end
