
@interface NSISVariable : NSObject <NSCoding> {
    <NSISVariableDelegate> * _delegate;
    struct { 
        unsigned int value; 
    }  _engineVarIndexes;
    NSISEngine * _engines;
    unsigned int  _ident;
    NSMapTable * _overflowEngines;
}

@property <NSISVariableDelegate> *delegate;
@property (readonly) NSArray *engines;
@property (readonly) int orientationHint;
@property (readonly) bool shouldBeMinimized;
@property (readonly) int valueRestriction;

+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3 valueIsUserObservable:(bool)arg4;

- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionInEngine:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)engines;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)markedConstraint;
- (bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (int)orientationHint;
- (struct { unsigned int x1; })overflowEngineVarIndexForEngine:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldBeIntegral;
- (bool)shouldBeMinimized;
- (bool)valueIsUserVisible;
- (int)valueRestriction;

@end
