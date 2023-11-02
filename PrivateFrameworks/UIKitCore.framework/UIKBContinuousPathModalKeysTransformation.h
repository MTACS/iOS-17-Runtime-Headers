
@interface UIKBContinuousPathModalKeysTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_donorControlKeysForLastDisplayRowForKeyplane:(id)arg1 transformationContext:(id)arg2;
+ (id)_donorKeyplaneForKeyplane:(id)arg1 transformationContext:(id)arg2;
+ (id)rollbackKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformationIdentifier;

@end
