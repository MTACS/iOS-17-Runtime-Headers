
@protocol SXLayoutInstruction <NSObject>

@required

- (void)didLayoutComponentBlueprint:(SXComponentBlueprint *)arg1 blueprint:(SXLayoutBlueprint *)arg2;
- (bool)isFulfilledForBlueprint:(SXLayoutBlueprint *)arg1;

@end
