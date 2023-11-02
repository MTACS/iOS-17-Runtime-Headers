
@interface OABShapeGeometry : NSObject

+ (int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2;
+ (struct OADAdjustCoord { bool x1; int x2; })adjustCoordWithComputedValue:(struct EshComputedValue { bool x1; int x2; })arg1;
+ (void)appendAdjustPoint:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1 toPathParams:(void*)arg2;
+ (struct EshComputedValue { bool x1; int x2; })computedValueWithAdjustCoord:(struct OADAdjustCoord { bool x1; int x2; })arg1;
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; int (**x4)(); }*)arg1 toGeometry:(id)arg2;
+ (void)readFromFormulas:(const void*)arg1 toGeometry:(id)arg2;
+ (void)readFromLimo:(struct CsPoint<int> { int x1[2]; })arg1 toGeometry:(id)arg2;
+ (void)readFromPathCommands:(const void*)arg1 pathParams:(const void*)arg2 toGeometry:(id)arg3;
+ (void)readFromShape:(void*)arg1 toShape:(id)arg2;
+ (void)readFromTextBoxRects:(const void*)arg1 toGeometry:(id)arg2;
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; int (**x4)(); }*)arg1 toGeometry:(id)arg2;
+ (void)readLimoFromPath:(const struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 toGeometry:(id)arg2;
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 toGeometry:(id)arg2;
+ (void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(struct EshShapeProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; int (**x4)(); }*)arg2;
+ (void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(void*)arg2;
+ (void)writeFormulasFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)writeFromShape:(id)arg1 toShape:(void*)arg2;
+ (void)writeLimoFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;

@end
