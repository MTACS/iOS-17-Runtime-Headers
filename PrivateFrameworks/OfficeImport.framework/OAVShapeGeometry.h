
@interface OAVShapeGeometry : NSObject

+ (struct OADAdjustCoord { bool x1; int x2; })readAdjustCoord:(id)arg1;
+ (void)readAdjustValuesFromManager:(id)arg1 toGeometry:(id)arg2;
+ (id)readFromManager:(id)arg1;
+ (void)readLimoFromManager:(id)arg1 toGeometry:(id)arg2;
+ (void)readTextBodyRectsFromManager:(id)arg1 toGeometry:(id)arg2;

@end
