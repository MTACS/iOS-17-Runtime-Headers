
@interface OZSceneComposer : NSObject

+ (unsigned long long)sceneMeshCategoryBitMask;

- (void)calcFloorPositionBeneath:(void *)arg1 scene:(void *)arg2; // needs 2 arg types, found 1: id
- (void)doIntersectionFrom:(void *)arg1 lookingAt:(void *)arg2 scene:(void *)arg3; // needs 3 arg types, found 1: id
- (void)intersectionTestFrom:(void *)arg1 lookingAt:(void *)arg2 scene:(void *)arg3; // needs 3 arg types, found 1: id

@end
