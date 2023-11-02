
@interface EKResourceChangeNotification : EKNotification

@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSSet *resourceChanges;

+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;

- (void)addResourceChange:(id)arg1;
- (id)lastModifiedDate;
- (void)removeResourceChange:(id)arg1;
- (id)resourceChanges;
- (void)setLastModifiedDate:(id)arg1;
- (void)setResourceChanges:(id)arg1;

@end
