
@interface CRKClassroomConfiguration : NSObject

+ (id)configurationSource;
+ (void)fetchConfiguration:(id /* block */)arg1;
+ (void)setConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (id)setOfActiveRestrictionUUIDs:(id)arg1;

@end
