
@interface STCoreOrganization : NSManagedObject

@property (nonatomic, copy) NSSet *blueprints;
@property (nonatomic, retain) NSSet *enqueuedPayloads;
@property (nonatomic, retain) NSSet *pendingPayloads;
@property (nonatomic, retain) NSSet *recentPayloads;

+ (Class)internalClassForSerializableClassName:(id)arg1;

@end
