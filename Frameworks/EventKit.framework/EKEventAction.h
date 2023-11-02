
@interface EKEventAction : EKObject

@property (nonatomic, copy) NSString *externalFolderID;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, copy) NSData *externalRepresentation;
@property (nonatomic, copy) NSString *externalScheduleID;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (id)externalFolderID;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setExternalScheduleID:(id)arg1;

@end
