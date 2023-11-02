
@interface FFSubscription : NSObject

+ (id)decodeFromDictionary:(id)arg1;
+ (id)mergeSubscriptions:(id)arg1;

- (id)encodeToDictionary;
- (id)init;
- (id)initPrivate;
- (bool)matchesFeature:(id)arg1 inDomain:(id)arg2 inAlreadyLockedConfiguration:(id)arg3;
- (bool)matchesFeature:(id)arg1 inDomain:(id)arg2 inConfiguration:(id)arg3;
- (id)nameOfClass;

@end
