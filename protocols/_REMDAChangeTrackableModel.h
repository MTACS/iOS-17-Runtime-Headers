
@protocol _REMDAChangeTrackableModel <NSObject>

@required

+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <_REMDAChangeTrackableModel> *, void*, id, SEL
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, REMChangeTombstone *, void*, id, SEL
+ (id /* block */)rem_DA_fetchByObjectIDBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, REMObjectID *, bool, REMStore *, id*, void*, id, SEL
+ (id /* block */)rem_DA_fetchByObjectIDsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, NSArray *, REMStore *, id*, void*, id, SEL
+ (NSArray *)rem_DA_propertiesAffectingIsConcealed;
+ (bool)rem_DA_supportsConcealedObjects;
+ (bool)rem_DA_supportsFetching;

- (REMObjectID *)accountID;
- (REMObjectID *)objectID;

@optional

- (NSString *)externalIdentifierForMarkedForDeletionObject;

@end
