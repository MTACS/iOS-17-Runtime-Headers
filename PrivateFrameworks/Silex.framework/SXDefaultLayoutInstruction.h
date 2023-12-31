
@interface SXDefaultLayoutInstruction : NSObject <SXLayoutInstruction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instruction;

- (id)description;
- (bool)isFulfilledForBlueprint:(id)arg1;

@end
