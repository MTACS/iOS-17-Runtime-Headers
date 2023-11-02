
@interface UIKBResizableKeyplaneTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)estimatedProgressForHeight:(double)arg1;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformationIdentifier;

@end
