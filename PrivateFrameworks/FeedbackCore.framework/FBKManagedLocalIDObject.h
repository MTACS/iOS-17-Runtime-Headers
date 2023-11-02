
@interface FBKManagedLocalIDObject : FBKManagedFeedbackObject

@property (copy) NSNumber *serverID;

+ (id)transformJSONArrayIntoLocalIDJSON:(id)arg1 uniquingPrefix:(id)arg2;
+ (id)transformJSONDictionaryIntoLocalIDJSON:(id)arg1 uniquingPrefix:(id)arg2;
+ (id)uniquingKey;

- (id)ID;
- (void)setID:(id)arg1;
- (void)setPropertiesForLocalIDKeys:(id)arg1;

@end
