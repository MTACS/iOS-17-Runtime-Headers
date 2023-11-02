
@interface SBEnableMotionDetectionWakeAttributeHandler : BLSHLocalCountingAssertionAttributeHandler

+ (Class)attributeBaseClass;
+ (id)attributeClasses;

- (void)activateWithFirstEntry:(id)arg1;
- (void)deactivateWithFinalEntry:(id)arg1;

@end
