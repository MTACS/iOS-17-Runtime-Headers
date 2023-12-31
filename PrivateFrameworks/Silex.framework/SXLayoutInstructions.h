
@interface SXLayoutInstructions : NSObject {
    NSArray * _instructions;
}

@property (nonatomic, readonly) NSArray *instructions;

+ (id)defaultInstructions;

- (void).cxx_destruct;
- (bool)areFulfilledForBlueprint:(id)arg1;
- (id)description;
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (id)initWithInstructions:(id)arg1;
- (id)instructions;

@end
