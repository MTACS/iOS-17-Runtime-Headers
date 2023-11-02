
@interface UIKBPhoneToCarPlayTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cachedKeys;
+ (id)cachedKeysForTransformationContext:(id)arg1;
+ (unsigned long long)columnBySwappingForLeftHandDriveIfNeeded:(unsigned long long)arg1;
+ (id)fillFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withEmptyKeyNamed:(id)arg2 inKeyplane:(id)arg3 withTransformationContext:(id)arg4;
+ (void)removeAddedKeysFromKeyplane:(id)arg1;
+ (id)transform10KeyKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformQWERTYKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformationIdentifier;

@end
