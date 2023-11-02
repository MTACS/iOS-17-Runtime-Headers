
@interface EKNotification : EKObject

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, copy) NSURL *hostURL;
@property (nonatomic, readonly) EKObjectID *objectID;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;

- (id)UUID;
- (id)calendar;
- (id)externalID;
- (id)externalModificationTag;
- (id)hostURL;
- (id)objectID;
- (bool)save:(id*)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setHostURL:(id)arg1;
- (void)setUUID:(id)arg1;

@end
