
@interface FBKManagedFeedbackObject : NSManagedObject

@property (nonatomic, copy) NSNumber *ID;
@property (nonatomic, copy) NSNumber *remoteID;

+ (id)entityName;
+ (id)importFromJSONArray:(id)arg1 intoContext:(id)arg2;
+ (id)importFromJSONObject:(id)arg1 intoContext:(id)arg2;

- (id)ID;
- (id)entityName;
- (bool)isEqualToFBKObject:(id)arg1;
- (void)setID:(id)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;

@end
