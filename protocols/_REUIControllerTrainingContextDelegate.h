
@protocol _REUIControllerTrainingContextDelegate

@required

- (bool)elementIsAvailable:(NSString *)arg1;
- (NSArray *)elementsOrdered:(unsigned long long)arg1 relativeToElement:(NSString *)arg2;
- (NSString *)interactionTypeForElement:(NSString *)arg1;

@end
