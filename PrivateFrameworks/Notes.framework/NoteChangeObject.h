
@interface NoteChangeObject : NSManagedObject

@property (nonatomic, retain) NSNumber *changeType;
@property (nonatomic, retain) NSMutableSet *noteIntegerIds;
@property (nonatomic, retain) NSMutableSet *noteServerIds;
@property (nonatomic, retain) NSMutableSet *noteServerIntIds;
@property (nonatomic, retain) NoteStoreObject *store;

@end
