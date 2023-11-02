
@interface EKNotificationCollection : EKObject

@property (nonatomic, copy) NSSet *notifications;
@property (nonatomic, readonly) EKSource *source;

+ (Class)frozenClass;
+ (bool)isWeakRelationship;
+ (id)knownRelationshipMultiValueKeys;

- (bool)_hasNotificationsCollectionFlag;
- (void)_setNotificationsCollectionFlag;
- (void)addNotification:(id)arg1;
- (unsigned int)flags;
- (id)initWithOptions:(id)arg1;
- (id)notifications;
- (void)removeNotification:(id)arg1;
- (bool)save:(id*)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalIDTag:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setNotifications:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (bool)validate:(id*)arg1;

@end
