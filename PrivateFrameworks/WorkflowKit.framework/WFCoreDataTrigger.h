
@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editableShortcut;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSSet *events;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int notificationLevel;
@property (nonatomic, retain) WFCoreDataRunEvent *runEvents;
@property (nonatomic, retain) NSData *selectedEntryMetadata;
@property (nonatomic, retain) WFCoreDataWorkflow *shortcut;
@property (nonatomic) bool shouldNotify;
@property (nonatomic) bool shouldPrompt;
@property (nonatomic) int source;
@property (readonly) Class superclass;

+ (id)fetchRequest;
+ (id)recordPropertyMap;

- (id)descriptor;
- (id)trigger;

@end
