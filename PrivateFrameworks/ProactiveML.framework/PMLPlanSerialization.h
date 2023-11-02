
@interface PMLPlanSerialization : NSObject

+ (id)planFromData:(id)arg1 store:(id)arg2 trainingNetworkPath:(id)arg3;
+ (id)planFromData:(id)arg1 withArgs:(id)arg2;
+ (id)planFromData:(id)arg1 withStore:(id)arg2;
+ (id)serializePlan:(id)arg1;

- (id)init;

@end
