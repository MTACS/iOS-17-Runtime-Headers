
@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (id)lastModifiedDate;
- (id)resourceChanges;
- (void)setLastModifiedDate:(id)arg1;
- (void)setResourceChanges:(id)arg1;

@end
