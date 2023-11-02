
@interface WFHealthKitResource : WFResource

+ (bool)isSingleton;
+ (bool)mustBeAvailableForDisplay;

- (void)refreshAvailability;

@end
