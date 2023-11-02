
@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (readonly) long long changeID;
@property (readonly) long long changeType;
@property (readonly, copy) NSManagedObjectID *changedObjectID;
@property (readonly, copy) NSDictionary *tombstone;
@property (readonly) NSPersistentHistoryTransaction *transaction;
@property (readonly, copy) NSSet *updatedProperties;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (id)entityDescription;
+ (id)entityDescriptionWithContext:(id)arg1;
+ (id)fetchRequest;
+ (id)shortStringForChangeType:(long long)arg1;
+ (id)stringForChangeType:(long long)arg1;

- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;

@end
