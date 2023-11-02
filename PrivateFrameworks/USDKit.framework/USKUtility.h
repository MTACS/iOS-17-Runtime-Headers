
@interface USKUtility : NSObject

+ (id)USDPreviewSurfaceDefaults;
+ (id)bufferMaterialPropertiesWithMaterial:(id)arg1;
+ (id)constantMaterialPropertiesWithMaterial:(id)arg1;
+ (id)firstUVMeshAttributeNameInMaterial:(id)arg1;
+ (bool)isSceneGraphNode:(id)arg1;
+ (bool)isShaderOutputProperty:(id)arg1;
+ (bool)isTransformNode:(id)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformWithNode:(id)arg1 time:(double)arg2;
+ (id)meshGroupsWithNode:(id)arg1;
+ (id)meshUniqueAndTriangulate:(id)arg1 names:(id)arg2;
+ (void)setLocalTransformWithNode:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 time:(double)arg3;
+ (id)shaderNodeType:(id)arg1;
+ (id)targetPropertyWithProperty:(id)arg1;
+ (id)textureMaterialPropertiesWithMaterial:(id)arg1;
+ (id)transformKeyTimesWithNode:(id)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransformWithNode:(id)arg1 time:(double)arg2;

@end
