
@interface _MKFShortcutAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFShortcutAction, MKFShortcutActionPrivateExtensions>

@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly, copy) MKFShortcutActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfShortcutAction;
- (id)databaseID;
- (id)home;

@end
