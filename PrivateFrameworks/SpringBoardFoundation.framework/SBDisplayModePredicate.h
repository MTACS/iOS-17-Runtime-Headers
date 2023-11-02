
@interface SBDisplayModePredicate : NSObject <NSCopying>

+ (id)allDisplays;
+ (id)forDisplay:(id)arg1;
+ (id)forDisplaysSimilarToDisplay:(id)arg1 useNativeSize:(bool)arg2;
+ (id)fromDefaultsKey:(id)arg1;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultsKeyRepresentation;
- (id)description;
- (bool)matchesDisplay:(id)arg1;

@end
