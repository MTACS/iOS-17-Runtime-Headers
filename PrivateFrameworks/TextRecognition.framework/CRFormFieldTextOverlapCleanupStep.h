
@interface CRFormFieldTextOverlapCleanupStep : NSObject <CRFormPostProcessingStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clipRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intersectionRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 type:(unsigned long long)arg3;
+ (id)cleanupTextOverlapForFields:(id)arg1 document:(id)arg2 underlinedFieldsOnly:(bool)arg3;

- (id)process:(id)arg1 externalFields:(id)arg2 document:(id)arg3 options:(id)arg4;

@end
